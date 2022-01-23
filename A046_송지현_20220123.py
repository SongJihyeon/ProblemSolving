#백준
#1159번 농구 경기

inp = sorted([input()[0] for _ in range(int(input()))])
inp_set = set(inp)
res = []
for c in inp_set:
    if inp.count(c) >= 5:
        res.append(c)
print(''.join(sorted(res)) if len(res) > 0 else "PREDAJA")
