class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        
        unordered_map<int,int> m;  // since we can kmow the number of occurance of elemnets
        
        for(auto a: nums)    // using ranged based for loop
        {
            m[a]++;   
            if(m[a]> n/2) return a;
        }
        return -1;
    }
};