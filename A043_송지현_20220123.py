#LeetCode
#14. Longest Common Prefix

class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        prefix = ""
        if len(strs) == 1:
            return strs[0]
        for i in range(len(strs[0])):
            prefix += strs[0][i]
            for j in range(1,len(strs)):
                if strs[j].startswith(prefix):
                    continue
                else:
                    return prefix[:-1]
        if prefix != "":
            return prefix
        return ""
