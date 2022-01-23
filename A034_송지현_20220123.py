#백준
#3052번 나머지

result = []
for i in range(10):
    tmp = int(input())
    if tmp%42 not in result:
        result.append(tmp%42)

print(len(result))
