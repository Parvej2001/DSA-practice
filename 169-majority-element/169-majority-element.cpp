class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        
        unordered_map<int,int> m;
        
        for(auto a: nums)
        {
            m[a]++;
            if(m[a]> n/2) return a;
        }
        return -1;
    }
};