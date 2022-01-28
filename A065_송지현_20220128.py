#백준
#11650번 좌표 정렬하기

num = int(input())
li = []

for i in range(num):
    inp = list(map(int, input().split()))
    li.append(inp)

li.sort(key = lambda x: (x[0], x[1]))

for i in range(num):
    print(li[i][0], li[i][1])
