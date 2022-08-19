class Solution {
public:
    void moveZeroes(vector<int>& nums) {
      
        // int nonzero=0;
        // for(int j=0; j<nums.size(); j++){
        //     if(nums[j]!=0){
        //         swap(nums[j],nums[nonzero]);
        //         nonzero++;
        //     }
        // }
        
        // two poimter approach
        int j=0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        while(j<nums.size())
            nums[j++]=0;
    }
};