//LeetCode
//922. Sort Array By Parity II
//C++

class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>v1,v2;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]%2==0){
                v1.push_back(nums[i]);
            } 
            else{
                v2.push_back(nums[i]);
            }   
        }
        vector<int> res(nums.size());
        int k=0, j=0;
        for(int i=0; i<nums.size(); i++){
            if(i%2==0){
                res[i]=v1[k++];
            }  
            else{
                res[i]=v2[j++];
            }     
        }
        return res;
    }
};