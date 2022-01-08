#지능형 기차
#백준 2455

inps = []
for i in range(4):
    inp = list(map(int, input().split()))
    inps.append(inp)

res = 0
tmp = 0
for i in range(4):
    tmp += inps[i][1]-inps[i][0]
    if tmp > res:
        res = tmp

print(res)
