#프로그래머스
#코딩테스트 연습 > Summer/Winter Coding(~2018) > 스킬트리

def solution(skill, skill_trees):
    answer = 0

    for item in skill_trees:
        skill_list = list(skill)
        for s in item:
            if s in skill:
                if s != skill_list.pop(0):
                    break
        else:
            answer += 1
            
    return answer
