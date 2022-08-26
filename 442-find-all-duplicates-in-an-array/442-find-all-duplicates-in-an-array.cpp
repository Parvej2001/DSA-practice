class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
       
        if(nums.empty())return {}; // return nothing if it is null
        vector<int>ans;
        sort(begin(nums),end(nums));   // sorting the array 
        int s = nums[0];    // initially storing the value of null
        for(int i=1;i<nums.size();i++){
            if(!(s^nums[i])){
                ans.push_back(nums[i]),i+=1;
                if(i<nums.size())s=nums[i];
                else break;
            }
                else s = nums[i];
        }
        return ans;
    }
};
