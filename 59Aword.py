s = input()
nUpper = 0
nLower = 0
for c in s:
    nUpper += c.isupper()
    nLower += c.islower()
if nUpper > nLower:
    s = s.upper()
else:
    s = s.lower()
print(s)
