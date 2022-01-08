#LeetCode
#455. Assign Cookies

class Solution(object):
    def findContentChildren(self, g, s):
        """
        :type g: List[int]
        :type s: List[int]
        :rtype: int
        """
        g.sort()
        s.sort()
        res = 0
        i = 0
        for tmp in s:
            if i < len(g) and tmp >= g[i]:
                res += 1
                i += 1
        return res
