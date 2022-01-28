#LeetCode
#1051. Height Checker

class Solution:
    def heightChecker(self, heights: List[int]) -> int:
        sort = heights.copy()
        sort.sort()
        count = 0
        for i in range(0, len(heights)):
            if(sort[i]!=heights[i]):
                count = count + 1
        return count
