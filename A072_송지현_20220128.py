#LeetCode
#1154. Day of the Year

class Solution:
    def dayOfYear(self, date: str) -> int:
        months = [31,28,31,30,31,30,31,31,30,31,30,31]
        a = 0
        date = date.split("-")
        date[1] = int(date[1])
        
        if int(date[0]) % 4 == 0 and int(date[1]) > 2:
            if int(date[0]) % 4 == 0 and int(date[0]) % 100 != 0:
                months[1] = 29
            elif int(date[0]) % 4 == 0 and int(date[0]) % 400 == 0:
                months[1] = 29
            else:
                pass
        a = sum(months[0:date[1]-1])
        a += int(date[2])
        return a
