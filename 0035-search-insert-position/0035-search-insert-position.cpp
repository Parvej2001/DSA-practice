class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
          int s = 0;
        int e = nums.size() - 1;
        int m;
        while(s <= e)
        {
            m = (s + e) / 2;
            if(nums[m] == target)
            {
                return m;
            }
            else if(nums[m] > target)
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
        }
        return s; //closest greater than target element index
    }
};