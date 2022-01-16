#프로그래머스
#코딩테스트 연습 > 탐욕법(Greedy) > 구명보트

def solution(people, limit):
    answer = 0
    people.sort()
    i = 0
    j = len(people) -1
    while i<=j:
        answer += 1
        if people[j] + people[i] <= limit:
            i += 1
        j -= 1
    return answer
