#백준
#1026번 보물

num = int(input())

a = list(map(int, input().split()))
b = list(map(int, input().split()))

res = 0
for i in range(num):
    res += min(a) * max(b)
    a.pop(a.index(min(a)))
    b.pop(b.index(max(b)))

print(res)
