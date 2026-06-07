def solution():
    s = input()
    if not len(s):
        print(s)
        return
    s = s[0].upper() + s[1:]
    print(s)
solution()
