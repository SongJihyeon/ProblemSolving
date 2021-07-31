//LeetCode
//704. Binary Search
//C++

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0; 
        int right = nums.size()-1;
        int mid = -1;
        while(left <= right){
            mid = (left + right)/2;
            if(nums[mid] > target){
                right = mid -1;
            }
            else if(nums[mid] < target){
                left = mid+1;
            }
            else{
                break;
            }
        }
        if(nums[mid]!=target){
            return -1;
        }
        return mid;
    }
};