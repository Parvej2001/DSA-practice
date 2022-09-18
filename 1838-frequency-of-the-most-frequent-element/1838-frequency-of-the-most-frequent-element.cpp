// this is the sliding window solution

 /*
 class Solution {
public:
	int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
		long long ans = 1;
		long long i = 0, sum = 0;
		for (int j = 0; j < nums.size(); ++j) {
			sum += nums[j];
			while ((j - i + 1) * nums[j] - sum > k) sum -= nums[i++];
			ans = max(ans, j - i + 1);
		}
		return ans;
	}
};
*/
// more optimize solution
class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int l = 0, r = 1, ans = 1;
        long op = 0;
        while(r < nums.size()){
          op += (long)(nums[r] - nums[r-1])*(long)(r-l);
          // if op > k start removing from left side
          while(op > k){
            op -= (nums[r]-nums[l]);
            l++;
            if(l == r) op = 0;
          }
          
          ans = max(ans,r-l+1);
          r++;
        }
      return ans;
    }
};