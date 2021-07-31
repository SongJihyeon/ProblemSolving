//LeetCode
//976. Largest Perimeter Triangle
//C++

class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        int maximum=0;
        sort(nums.begin(),nums.end());
        for(int i=0 ; i < nums.size()-2 ; i++){
            if(nums[i]+nums[i+1]>nums[i+2]){
                maximum=max(maximum,(nums[i]+nums[i+1]+nums[i+2]));
            }
        }
        return maximum;
    }
};