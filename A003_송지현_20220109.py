#LeetCode
#66. Plus One

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        inp_num = 0
        length = len(digits)
        for i in digits:
            inp_num += i*10**(length - 1)
            length -= 1
        inp_num += 1
        output = list(str(inp_num))
        return output
