class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n=nums.size();
        int totalsum=0, csum=0;
        
        for(auto t: nums){
            totalsum+=t;
        }
        
        for(int i=0; i<n; i++){
            
            if(csum==totalsum-csum-nums[i]){
                return i;
            }
            
            csum+=nums[i];
        }
        
        return -1;
    }
    
    
};