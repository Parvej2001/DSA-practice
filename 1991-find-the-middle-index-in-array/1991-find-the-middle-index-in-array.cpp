class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
    
        // int n=nums.size();
        // int currentsum=0;
        // int totalsum=0;
        // for(int i=0; i<n; i++)
        // {
        //     totalsum+=nums[i];
        // }
        // for(int i=0; i<n; i++)
        // {
        //     if(currentsum==totalsum-currentsum-nums[i]){
        //         return i;
        //     }
        //     currentsum+=nums[i];
        // }
        // return -1;
        
        // more optamize solution.
        
        int sum = 0 ; 
        for(auto i : nums)
            sum+=i;
        
        int leftsum = 0 ;
        int rightsum = sum-nums[0] ;
        
        // For 0 Index
         if(leftsum == rightsum)
                return 0;
        
        for(int i = 1 ; i <nums.size() ; i++)
        {
            leftsum+= nums[i-1];
            rightsum -= nums[i];
            if(leftsum == rightsum)
                return i;
        }
        return -1;
    }
};