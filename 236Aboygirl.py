letters = [0] * 26
name = input()
count = 0

for c in name:
    letters[ord(c.lower()) - ord('a')] += 1
for num in letters:
    if num:
        count += 1
if count % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
