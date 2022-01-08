#나누어 떨어지는 숫자 배열
#프로그래머스 코딩테스트 연습 연습문제

def solution(arr, divisor):
    answer = []
    for i in range(len(arr)):
        if arr[i]%divisor == 0:
            answer.append(arr[i])
    answer.sort()
    if len(answer) == 0:
        return [-1]
    return answer
