class Solution {
public:
	int findNumbers(vector<int>& nums) {  // creating arrays of the given values
		int ans=0;
		for(int i=0;i<nums.size();i++)
		{
			string str=to_string(nums[i]);
			int count=0;
			for(char i:str)
			{
				count++;
			}
			if(count%2==0)
				ans++;

		}
		return ans;
	}
};
