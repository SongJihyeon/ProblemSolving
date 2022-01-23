#백준
#11721번 열 개씩 끊어 출력하기

inp = input()
for i in range(0, len(inp), 10):
    print(inp[i:i+10])
