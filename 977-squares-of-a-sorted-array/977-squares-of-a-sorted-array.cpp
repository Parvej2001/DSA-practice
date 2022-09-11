// using 2 pointer approach 



class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int original_size = nums.size();
        for(int i = 0; i < original_size; i++){
            nums[i] = (nums[i])*(nums[i]);
        }
        sort(nums.begin(), nums.end());
        return nums;
    }
};

// My solution 
// class Solution {
// public:
// 	vector<int> sortedSquares(vector<int>& nums) {
// 		for(int i=0;i<nums.size();i++)
// 			nums[i]=pow(nums[i],2);
// 		sort(nums.begin(),nums.end());
// 		return nums;
// 	}
// };
