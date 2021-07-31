//LeetCode
//303. Range Sum Query - Immutable
//C++

class NumArray {
public:
    vector<int> answer;
    NumArray(vector<int>& nums) {
        answer=nums;
    }
    
    int sumRange(int left, int right) {
        int sum=0;
        for(int i=left;i<=right;i++){
            sum=sum+answer[i];
        }
        return sum;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */