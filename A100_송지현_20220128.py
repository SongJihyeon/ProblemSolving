#LeetCode
#13. Roman to Integer

class Solution:
    def romanToInt(self, s: str) -> int:
        dict = {'I':1,'V':5,'X':10,'L':50,'C':100,'D':500,'M':1000}
        li = []
        for num in s:
            if li != [] and dict[num] > li[-1]:
                li[-1] = dict[num] - li[-1]
            else:
                li.append(dict[num])
        return sum(li)
