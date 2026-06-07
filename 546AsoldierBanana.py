def sum(num):
    return num * (num + 1) // 2

k, n, w = map(int, input().split())

cost = k * sum(w)
if n >= cost:
    print(0)
else:
    print(cost - n)
