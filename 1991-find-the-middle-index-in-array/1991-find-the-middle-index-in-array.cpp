class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
    
        int n=nums.size();
        int currentsum=0;
        int totalsum=0;
        for(int i=0; i<n; i++)
        {
            totalsum+=nums[i];
        }
        for(int i=0; i<n; i++)
        {
            if(currentsum==totalsum-currentsum-nums[i]){
                return i;
            }
            currentsum+=nums[i];
        }
        return -1;
    }
};