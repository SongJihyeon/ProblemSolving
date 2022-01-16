#프로그래머스
#코딩테스트 연습 > 탐욕법(Greedy) > 큰 수 만들기

def solution(number, k):
    answer = []
    
    for num in number:
        while k > 0 and answer and answer[-1] < num:
            answer.pop()
            k -= 1
        answer.append(num)
        
    return ''.join(answer[:len(answer) - k])
