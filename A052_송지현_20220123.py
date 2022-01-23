#백준
#8958번 OX퀴즈

num = int(input())
for i in range(num):
    case = str(input())
    score = 0
    count = 0
    for j in list(case):
        if j == "O":
            count += 1
            score += count
        elif j == "X":
            count = 0
    print(score)
