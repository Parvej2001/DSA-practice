class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_n_nums = 0;
        int sum_given_nums = 0;
        
        for (int i = 0; i < nums.size(); i++){
            sum_n_nums += i+1;    // We do sum_n_nums += i+1; to get the sum of [1, n+1] and not [0, n]
            sum_given_nums += nums[i];
        }
        
        return sum_n_nums - sum_given_nums;
    }
};

// The idea is we first sum all integers [1, n+1], 
//then we sum all integers we have in the array and the subtract them. This will give us the missing integer.
//Time Complexity: O(n)
//Space Complexity: O(1)
