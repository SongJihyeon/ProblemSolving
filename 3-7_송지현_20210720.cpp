//LeetCode
//860. Lemonade Change
//C++

class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int count[2] = {0}; //남은 지폐의 갯수 세기 위한 변수
        for(int i=0; i<bills.size(); i++){
            if(bills[i] == 5){ //5를 냈을 경우
                count[0]++;
            }
            if(bills[i] == 10){ //10을 냈을 경우
                if(count[0] > 0){
                    count[1]++;
                    count[0]--;
                }
                else{
                    return false;
                }
            }
            if(bills[i] == 20){ //20을 냈을 경우
                if(count[0]>0 && count[1]>0){ //10 하나 5 하나로 거스름돈
                    count[1]--;
                    count[0]--;
                }
                else if(count[0]>=3){ //5 세개로 거스름돈
                    count[0] -= 3;
                }
                else{
                    return false;
                }
            }
        }
        return true;
    }
};