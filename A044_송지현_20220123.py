#LeetCode
#551. Student Attendance Record I

class Solution(object):
    def checkRecord(self, s):
        """
        :type s: str
        :rtype: bool
        """
        if((s.count('A')<2)):
            counter=0
            for char in s:
                if(char=='L'): counter+=1
                elif((char != 'L') and (counter < 3)): counter=0
            if(counter<3):
                return True
        return False
