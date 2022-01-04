#방 번호
#백준 1475번

n = input()
res = [0]*10

for i in range(len(n)):
    #6이거나 9이면 그냥 무조건 6번째로 더해줌
    if int(n[i]) == 6 or int(n[i]) == 9:
        res[6] += 1
    else:
        res[int(n[i])] += 1

#6,9 중복 가능 처리
if res[6]%2==0:
    res[6] = int(res[6]/2)
else:
    res[6] = int(res[6]/2)+1

print(max(res))
