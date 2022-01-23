#LeetCode
#1704. Determine if String Halves Are Alike

class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        mid = len(s)//2
        s1 = s[0:mid]
        s2 = s[mid:]
        vow = ['a','e','i','o','u','A','E','I','O','U']
        c=0
        d=0
        for i in range(len(s1)):
            if s1[i] in vow:
                c = c+1
            if s2[i] in vow:
                d = d+1
        if c == d:
            return True
        else:
            return False
