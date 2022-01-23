#백준
#5355번 화성 수학

num = int(input())
for i in range(num):    
    inp = list(map(str, input().split()))
    result = 0
    for j in range(len(inp)):
        if j == 0:
            result += float(inp[0])
        else:
            if inp[j] == "#":
                result -= 7
            elif inp[j] == "%":
                result += 5
            elif inp[j] == "@":
                result *= 3
    print("%0.2f" %result)
