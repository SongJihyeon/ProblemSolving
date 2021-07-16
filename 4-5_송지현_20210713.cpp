//LeetCode
//342. Power of Four
//C++

class Solution {
public:
    bool isPowerOfFour(int num) {
        if(num<=0){
            return false;
        }
        float ans;
        ans = 0.5*log2(num);
        if((int)ans == ans){
            return true;
        }
        else{
            return false;
        }
    }
};