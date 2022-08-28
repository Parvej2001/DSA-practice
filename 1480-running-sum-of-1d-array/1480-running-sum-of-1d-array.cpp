class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        
    vector<int> ans;
        
        int sum=0, n=nums.size();
        
        for(int i=0; i<n; i++)
        {
            sum=sum+nums[i];   
            ans.push_back(sum);    //storing the element
        }
        return ans;
    }
};