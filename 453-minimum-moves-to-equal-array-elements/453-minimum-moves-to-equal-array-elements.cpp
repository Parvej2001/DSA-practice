class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int sum=0,m=*min_element(nums.begin(),nums.end()); // finding the minimum element
        
        for(int i=0;i<nums.size();i++)
            
            sum+=nums[i]-m;
        return sum;
    }
};