#백준
#11656번 접미사 배열

inp = input()
result = []

for i in range(len(inp)):
    result.append(inp[i:])

result.sort()

for i in range(len(result)):
    print(result[i])
