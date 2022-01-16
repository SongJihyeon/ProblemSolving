#LeetCode
#26. Remove Duplicates from Sorted Array


class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        temp = 9999999
        count = 0
        res = []
        for i in range(len(nums)):
            if nums[i] != temp:
                temp = nums[i]
                # print(temp)
                res.append(nums[i])
                count+= 1
        res.sort()
        for i in range(len(nums)):
            if i < len(res):
                nums[i] = res[i]
            else:
                nums[i] = '_'
                
        while '_' in nums:
            nums.remove('_')
