class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_n_nums = 0;
        int sum_given_nums = 0;
        
        for (int i = 0; i < nums.size(); i++){
            sum_n_nums += i+1;
            sum_given_nums += nums[i];
        }
        
        return sum_n_nums - sum_given_nums;
    }
};