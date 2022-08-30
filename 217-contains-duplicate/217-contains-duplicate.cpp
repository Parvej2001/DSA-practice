class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
//         int n=nums.size();
        
//         sort(nums.begin(), nums.end());
        
//         for(int i=0; i<n; i++)
//         {
//             if(nums[i]==nums[i+1])
//                 return true;
//             break;
//         }
//         return false;
         map<int,int> mp;
        for(auto i:nums){
            mp[i]++;
            if(mp[i]>1)
                return true;
        }
        return false;
    }
};