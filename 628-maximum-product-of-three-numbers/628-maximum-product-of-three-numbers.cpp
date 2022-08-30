class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // int n=nums.size();
        // int product=1;
        // for(int i=0; i<n; i++){
        //      product=product*nums[i];           
        // }
        // return product;
        
        int n=nums.size();
        sort(nums.begin(),nums.end());              //Time complexity   O(nlogn)
        int x=nums[n-1]*nums[n-2]*nums[n-3];
        int y=nums[0]*nums[1]*nums[n-1];
        return max(x,y);
    }
};


