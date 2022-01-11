#백준
#10814번 나이순 정렬

num = int(input())

inp_arr = []
for i in range(num):
     inp_arr.append(list(input().split()))
inp_arr.sort(key=lambda a:int(a[0]))

for i in range(num):
    print(inp_arr[i][0], inp_arr[i][1])
