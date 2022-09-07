class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // sort(nums.begin(), nums.end());
        // return nums[(int)nums.size()/2];
        
        map<int, int> mp;
        int n = nums.size();
        for(int i=0; i<n; i++)
        {
            mp[nums[i]]++;
        }
        for(auto it : mp)
        {
            if(it.second > n/2)
            {
                return it.first;
            }
        }
        return -1;
    }
};