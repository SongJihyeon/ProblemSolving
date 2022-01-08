#문자열 내 p와 y의 개수
#프로그래머스 코딩테스트 연습 연습문제

def solution(s):
    answer = True
    p = 0
    y = 0
    s = s.lower()
    for i in range(len(s)):
        if s[i] == 'p':
            p += 1
        if s[i] == 'y':
            y += 1

    if p == y:
        answer = True
    else:
        answer = False
        
    return answer
