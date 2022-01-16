#LeetCode
#1710. Maximum Units on a Truck

class Solution:
    def maximumUnits(self, boxTypes: List[List[int]], truckSize: int) -> int:
        boxTypes = sorted(boxTypes, key=lambda x : x[1], reverse=True)
        box_num = 0
        result = 0
        for i in boxTypes:
            if box_num + i[0] < truckSize:
                result += i[0] * i[1]
                box_num += i[0]
                print(box_num)
            else:
                result += (truckSize-box_num) * i[1]
                return result
        return result
                
