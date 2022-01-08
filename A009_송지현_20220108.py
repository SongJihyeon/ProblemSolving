#프로그래머스
#코딩테스트 연습 > 연습문제 > 문자열 다루기 기본

def solution(s):
    answer = True
    if s.isnumeric() == False:
        answer = False
    if len(s) != 4 and len(s) != 6:
        answer = False
    return answer
