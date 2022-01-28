#LeetCode
#682. Baseball Game

class Solution:
    def calPoints(self, ops: List[str]) -> int:
        stack = []
        for o in ops:
            if o == '+':
                stack.append(stack[-1] + stack[-2])
            elif o == 'C':
                stack.pop()
            elif o == 'D':
                stack.append(2 * stack[-1])
            else:
                stack.append(int(o))

        return sum(stack)
