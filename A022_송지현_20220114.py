#백준
#1267번 핸드폰 요금

num = int(input())
inp = list(map(int, input().split()))

y = 0
m = 0

for i in inp:
    y += 10*(i//30+1)
    m += 15*(i//60+1)

if y<m:
    print("Y ", end='')
elif y == m:
    print("Y M ", end='')
else:
    print("M ", end='')

print(min(y, m))
