#프로그래머스
#코딩테스트 연습 > 정렬 > H-Index

def solution(citations):
    citations = sorted(citations)
    length = len(citations)
    for i in range(length):
        if citations[i] >= length-i:
            return length-i
    return 0
