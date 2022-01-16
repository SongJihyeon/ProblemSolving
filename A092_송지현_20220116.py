#LeetCode
#922. Sort Array By Parity II

class Solution:
    def sortArrayByParityII(self, nums: List[int]) -> List[int]:
        even = []
        odd = []
        for i in nums:
            if i%2 == 0:
                even.append(i)
            else:
                odd.append(i)
        for i in range(len(nums)):
            if i%2 == 0:
                nums[i] = even.pop()
            if i%2 == 1:
                nums[i] = odd.pop()
        return nums
