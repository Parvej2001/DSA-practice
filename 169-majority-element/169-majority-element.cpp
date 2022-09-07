// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
        
//         // my solution
//         // sort(nums.begin(), nums.end());
//         // return nums[(int)nums.size()/2];

        //Explanation: Firstly we are adding the numbers and their frequency of nums in the map mp. 
        //Then we are traversing the map mp and checking that which number's frequency is greater than n/2 where n is the size of nums 
        //and if the frequency is greater than n/2 we are returning that number.
//         map<int, int> mp;
//         int n = nums.size();
//         for(int i=0; i<n; i++)
//         {
//             mp[nums[i]]++;
//         }
//         for(auto it : mp)
//         {
//             if(it.second > n/2)
//             {
//                 return it.first;
//             }
//         }
//         return -1;
//     }
// };

class Solution {
    // using moore's voting alogrithm
     int help(vector<int>& nums) {
        int cnt = 0; int element = 0;
         
         for(auto num : nums){
             if(cnt == 0) element = num;
             if(num == element) cnt +=1;
             else cnt -=1;
         }
         return element;
    }
public:
    int majorityElement(vector<int>& nums) {
        return help(nums);
    }
};
