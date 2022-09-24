class Solution {
public:
    //ideology is: if array is sorted and rotated then there will be only one break point
//and if array is only sorted than there will be zero break point
//if the break point is more than 1 then it means the array is not sorted

bool check(vector<int>& nums) {
        int size = nums.size();
        int breakPoint = 0;
        for(int i=0; i<size; i++)
        {
            if(nums[i] > nums[(i+1)%size])
                breakPoint++;
        }
        return (breakPoint<=1);
    }
};