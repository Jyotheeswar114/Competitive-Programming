import math
Inf = math.inf
T = int(input())
for t in range(T):
    s = input()
    n = int(input())
    links = [input() for i in range(n)]
    alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    distances = {"A": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "B": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "C": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "D": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "E": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "F": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "G": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "H": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "I": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "J": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "K": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "L": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "M": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "N": {
        "A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "O": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "P": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "Q": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "R": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "S": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "T": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "U": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "V": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "W": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "X": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "Y": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}, "Z": {"A": Inf, "B": Inf, "C": Inf, "D": Inf, "E": Inf, "F": Inf, "G": Inf, "H": Inf, "I": Inf, "J": Inf, "K": Inf, "L": Inf, "M": Inf, "N": Inf, "O": Inf, "P": Inf, "Q": Inf, "R": Inf, "S": Inf, "T": Inf, "U": Inf, "V": Inf, "W": Inf, "X": Inf, "Y": Inf, "Z": Inf}}
    for i in links:
        distances[i[0]][i[1]] = 1
    for i in alpha:
        distances[i][i] = 0
    for k in alpha:
        for i in alpha:
            for j in alpha:
                distances[i][j] = min(
                    distances[i][j], distances[i][k] + distances[k][j])
    lenS = len(s)
    isSameLetter = True
    for i in range(lenS-1):
        if s[i] != s[i+1]:
            isSameLetter = False
    if lenS == 1 or isSameLetter:
        print("Case #{}: 0".format(t+1))
    else:
        result = Inf
        for i in alpha:
            sum = 0
            for j in s:
                sum += distances[j][i]
            result = min(result, sum)
        if result == Inf:
            result = -1
        print("Case #{}: {}".format(t+1, result))
