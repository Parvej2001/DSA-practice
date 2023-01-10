// Random solution 
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int> ans;  //new vector to store the merged sorted array
        int i = 0;
        int j = 0;
		/* Pushing the elements in the ans vector by comparing 
		the elements  of nums1 and nums2 */
        while(i<m && j<n){
            if(nums1[i] <= nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
            }
        }
		// pushing the elements in case some elements are left in nums1
        while(i < m){
            ans.push_back(nums1[i]);
            i++;
        }
		// pushing the elements in case some elements are left in nums2
         while(j < n){
            ans.push_back(nums2[j]);
            j++;
        }

        nums1.clear(); // clearing the nums1 to store the merged array

        for(int i = 0; i<m+n; i++){
            nums1.push_back(ans[i]);  // copying ans into nums1
        }
    }
};
