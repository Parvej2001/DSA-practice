class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
vector<int> ans;
        unordered_map<int, int> parvej;
        
        for(int i=0; i<nums.size(); i++)
        {
            if(parvej.find(target -nums[i]) != parvej.end())
            {
                ans.push_back(parvej[target-nums[i]]);
                ans.push_back(i);
                return ans;
            }
            parvej[nums[i]] =i;
        }
        return ans;
    }
};