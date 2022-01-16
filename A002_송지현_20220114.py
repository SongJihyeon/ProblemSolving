#LeetCode
#118. Pascal's Triangle

class Solution:
    def generate(self, numRows: int) -> List[List[int]]:
        result = [[1]]
        if numRows == 1:
            return result
        else:
            result.append([1,1])
            for i in range(1, numRows-1):
                before = result[i]
                new = []
                new.append(before[0])
                for j in range(len(before) - 1):
                    fir = before[j]
                    sec = before[j+1]
                    new.append(fir + sec)
                new.append(before[-1])
                result.append(new)
        return result 
