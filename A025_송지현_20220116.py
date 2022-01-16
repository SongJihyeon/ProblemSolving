#LeetCode
#342. Power of Four

class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        if n == 0 or n<0:
            return 0
        while n!=1:
            if n % 4 != 0:
                return 0
            n = n // 4
        return 1
