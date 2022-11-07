// class Solution {
// public:
//   vector<int> twoSum(vector<int>& nums, int target) {
        
//         vector<int> ans;
//         unordered_map<int, int> parvej;
        
//         for(int i=0; i<nums.size(); i++)
//         {
//             if(parvej.find(target -nums[i]) != parvej.end())
//             {
//                 ans.push_back(parvej[target-nums[i]]);
//                 ans.push_back(i);
//                 return ans;
//             }
//      parvej[nums[i]] =i;
//         }
//         return ans;
//     }
// };

// more understandable format of the above solution
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;  // creating array to store answer
        unordered_map<int,int> map;  // creating a hash table
        for(int i=0;i<nums.size();++i){
            int diff = (target-nums[i]);
            if(map.find(diff)!=map.end()){
                
                ans.push_back(i);
                ans.push_back(map[diff]);
                return ans;
            }
            map[nums[i]]= i;
        }
        return ans;
        
    }
};
