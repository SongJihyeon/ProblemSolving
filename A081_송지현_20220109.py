#백준
#2693번 N번째 큰 수

num = int(input())
inp_arr = []
for i in range(num):
    inp_arr = list(map(int, input().split()))
    inp_arr.sort(reverse=True)
    print(inp_arr[2])
