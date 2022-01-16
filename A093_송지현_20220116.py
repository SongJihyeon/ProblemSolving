#LeetCode
#88. Merge Sorted Array

class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        for i in range(0, n):
            nums1[len(nums1)-i-1] = nums2[i]
        nums1.sort()
