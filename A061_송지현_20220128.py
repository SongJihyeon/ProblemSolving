#LeetCode
#168. Excel Sheet Column Title

class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        res = ""
    
        while columnNumber > 0:
            c = chr(ord('A') + (columnNumber -1) % 26)
            res = c + res
            columnNumber = (columnNumber - 1)// 26

        return res
