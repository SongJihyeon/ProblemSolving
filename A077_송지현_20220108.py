#백준
#2822번 점수 계산

inp_sc = []
for i in range(8):
    inp_sc.append(int(input()))

sort_inp = sorted(inp_sc, reverse=True)

high = []
for i in range(5):
    high.append(sort_inp[i])

sum = 0
res = []
for i in high:
    res.append(inp_sc.index(i))
    sum += i

print(sum)
res = sorted(res)

for i in res:
    print(i+1, end=' ')
