#백준
#4344번 평균은 넘겠지

num = int(input())

for i in range(num):
    inp = list(map(int, input().split()))
    avg = sum(inp[1:])/inp[0]

    count = 0
    for k in inp[1:]:
        if k > avg:
            count += 1
    print(f'{count/inp[0]*100:.3f}%')
