import math
T = int(input())
vowels = "AEIOU"
for t in range(T):
    s = input()
    alpha = {"A": 0, "B": 0, "C": 0, "D": 0, "E": 0, "F": 0, "G": 0, "H": 0, "I": 0, "J": 0, "K": 0, "L": 0, "M": 0,
             "N": 0, "O": 0, "P": 0, "Q": 0, "R": 0, "S": 0, "T": 0, "U": 0, "V": 0, "W": 0, "X": 0, "Y": 0, "Z": 0}
    vowelCount, consCount = 0, 0
    lenS = len(s)
    isSameLetter = True
    for i in range(lenS-1):
        if s[i] != s[i+1]:
            isSameLetter = False
    if lenS == 1 or isSameLetter:
        print("Case #{}: 0".format(t+1))
    else:
        vCount = 0
        for i in s:
            alpha[i] += 1
            if i in vowels:
                vCount += 1
        cCount = lenS - vCount
        if vCount == 0 or cCount == 0:
            print("Case #{}: {}".format(t+1, lenS))
        else:
            result = math.inf
            for i in alpha:
                if alpha[i] > 0:
                    sum = 0
                    for j in alpha:
                        if i != j and alpha[j] > 0:
                            if i in vowels:
                                if j in vowels:
                                    sum += 2*alpha[j]
                                else:
                                    sum += alpha[j]
                            else:
                                if j in vowels:
                                    sum += alpha[j]
                                else:
                                    sum += 2*alpha[j]
                    result = min(result, sum)
            print("Case #{}: {}".format(t+1, result))
