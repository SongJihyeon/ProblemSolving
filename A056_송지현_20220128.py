#LeetCode
#496. Next Greater Element I

class Solution:
    def nextGreaterElement(self, nums1: List[int], nums2: List[int]) -> List[int]:
        result = []
        stack = []
        dic = {}
        
        for num in nums2:
            while stack and stack[-1] < num:
                data = stack.pop()
                dic[data] = num
            stack.append(num)
        
        for num in nums1:
            result.append(dic.get(num, -1))
            
        return result
