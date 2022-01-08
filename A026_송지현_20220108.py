#프로그래머스
#코딩테스트 연습 > 연습문제 > 하샤드 수

def solution(x):
    x = str(x)
    sum = 0
    for i in range(len(x)):
        sum += int(x[i])
    if int(x) % sum == 0:
        return True
    else:
        return False
