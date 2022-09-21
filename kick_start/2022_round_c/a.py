for c in range(int(input())):
    n = int(input())
    s = input()
    upper = False
    lower = False
    dig = False
    special = False
    for i in s:
        if i.isupper():
            upper = upper or True
        if i.islower():
            lower = lower or True
        if i.isnumeric():
            dig = dig or True
        if i in {'#', '@', '*', '&'}:
            special = special or True
    if not upper:
        s = s + 'A'
    if not lower:
        s += 'a'
    if not dig:
        s += '1'
    if not special:
        s += '@'
    if len(s) < 7:
        s += (7 * 'a')
    print(f"Case #{c + 1}: {s}")