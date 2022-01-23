#LeetCode
#728. Self Dividing Numbers

class Solution(object):
    def selfDividingNumbers(self, left, right):
        """
        :type left: int
        :type right: int
        :rtype: List[int]
        """
        res = []
        for i in range(left, right+1):
            for c in str(i):
                if int(c)==0 or i % int(c)!=0:
                    break
            else:
                res.append(i)
        return res
