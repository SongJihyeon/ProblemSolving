#백준
#10867번 중복 빼고 정렬하기

num = int(input())
inp = list(map(int, input().split()))

inp.sort()

temp = ''
for i in inp:
    if i != temp:
        print(i, end=' ')
        temp = i
