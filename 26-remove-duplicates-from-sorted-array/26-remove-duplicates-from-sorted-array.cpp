class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;	
for(int i=1;i<nums.size();i++)
    if(nums.at(i)>nums.at(l))
        nums.at(++l) = nums.at(i);
return l+1;
}
    
};