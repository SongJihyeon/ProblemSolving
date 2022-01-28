#LeetCode
#67. Add Binary

class Solution:
    def addBinary(self, a: str, b: str) -> str:
        a = list(reversed(a))
        b = list(reversed(b))
        res = [0] * (max(len(a), len(b)) + 1)
        
        for i in range(max(len(a), len(b))):
            if i < len(a):
                val1 = int(a[i])
            else:
                val1 = 0
            if i < len(b):
                val2 = int(b[i])
            else:
                val2 = 0
            
            res[i] += val1 + val2
            res[i + 1] += res[i] // 2
            res[i] = res[i] % 2
        
        i = len(res) - 1
        while i > 0 and res[i] == 0:
            res.pop()
            i -= 1
        
        res.reverse()
        return "".join([str(x) for x in res])
