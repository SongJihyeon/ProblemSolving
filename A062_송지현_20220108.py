#프로그래머스
#코딩테스트 연습 > 연습문제 > 2016년

def solution(a, b):
    answer = ["THU","FRI","SAT","SUN","MON","TUE","WED"]
    month =[31,29,31,30,31,30,31,31,30,31,30,31]
    sum = 0
    
    for i in range(a-1):
        sum += month[i]
    
    sum += b
    return answer[sum%7]
