#LeetCode
#125. Valid Palindrome

class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = re.sub('[^0-9a-zA-Z]+', '', s)
        s = s.lower()
        if  s == s[::-1] : 
            return  True
        else : 
            return False
