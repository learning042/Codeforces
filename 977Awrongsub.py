userInput = input()
formatedInput = userInput.split(' ')
num = int(formatedInput[0])
k = int(formatedInput[1])

for _ in range(k):
    if num % 10 == 0:
        num //= 10
    else:
        num -= 1
print(num)
