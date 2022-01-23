#LeetCode
#367. Valid Perfect Square

class Solution:
    def isPerfectSquare(self, num: int) -> bool:
        return int(num**(1/2)) == num**(1/2)
