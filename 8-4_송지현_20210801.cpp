//LeetCode
//26. Remove Duplicates from Sorted Array
//C++

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1;
        int j = 1;
        if(nums.size() == 0){
            return 0;
        }
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!= nums[i-1]){
                nums[j] = nums[i];
                j++;
                count++;
            }
        }
        return count;
    }
};