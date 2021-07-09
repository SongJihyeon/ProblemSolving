//LeetCode
//66. Plus One
//C++

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result(digits);
        result[result.size()-1]++;
        
        int size = result.size()-1;
        int ten = 0;
        while(1){
            if(size < 0){
                if(result[0] == 0 && ten == 1){
                    result.insert(result.begin(), 1);
                    break;
                }
                break;
            };
            result[size]+=ten;
            if(result[size]==10){
                result[size] = 0;
                ten = 1;
            }
            else{
                ten = 0;
            }
            size--;
        }
        
        
        return result;
    }
};