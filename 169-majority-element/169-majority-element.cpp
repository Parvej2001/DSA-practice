class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
//         int n=nums.size();
        
//         unordered_map<int,int> m;  // since we can kmow the number of occurance of elemnets
        
//         for(auto a: nums)    // using ranged based for loop
//         {
//             m[a]++;   
//             if(m[a]> n/2) return a;
//         }
//         return -1;
        
        
        // more optimal solution : TC= O(n),   SC= O(n) USING more voting algorithm
        
        int n=nums.size();
        int candidate=0;
        int vote=0;
        
        for(auto a: nums)   
        {
           if(vote==0){
               candidate=a;
           } 
            if(candidate==a)
                vote++;
            else
                vote--;     
        }
         return candidate;
    }
};