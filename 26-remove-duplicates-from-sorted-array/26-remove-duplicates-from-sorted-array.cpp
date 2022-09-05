class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int l=0;	
    for(int i=1;i<nums.size();i++)  // iterating 
    if(nums.at(i)>nums.at(l))  //comparing
        nums.at(++l) = nums.at(i);
return l+1;
}
    
};
