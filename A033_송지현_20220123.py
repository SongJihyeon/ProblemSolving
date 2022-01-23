#백준
#2953번 나는 요리사다

index = 0
result = 0

for i in range(5):
    inp = list(map(int, input().split()))

    if sum(inp) > result:
        result = sum(inp)
        index = i+1
print(index, result)
