class Solution {
public:
    int minMoves(vector<int>& nums) 
    {
        int sum=0,m=*min_element(nums.begin(),nums.end()); // finding the minimum element
        
        for(int i=0;i<nums.size();i++)
            
            sum+=nums[i]-m;
        return sum;
//         int min = INT_MAX;
//         int sum = 0;
//         for(int i=0; i<nums.size(); i++)
//         {
//             if(nums[i]<min)                    // to find the minimum element in array
//             {
//                 min = nums[i];
//             }          
//             sum+=nums[i];                    // to calculate the sum of array
//         }
 
//         int ans = sum - (min*nums.size());     
//         return ans;
    }
};
