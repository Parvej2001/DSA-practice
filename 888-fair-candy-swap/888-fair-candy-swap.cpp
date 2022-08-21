class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
          int m=aliceSizes.size(); 
        int n=bobSizes.size();
      // finding there sum
        
        int a=0,b=0;   // alice and bob
        
        for(int i=0;i<m;i++){  
            a+=aliceSizes[i];  // alice sum
        }
        for(int j=0;j<n;j++){
            b+=bobSizes[j];   // bob sum
        }
        int diff=(b-a)/2;   
        
        set<int>s; //each element has to be unique because the value of the element identifies it.
        for(auto i:aliceSizes){
            s.insert(i);     //to insert an element in the set.
        }
        vector<int>ans;
        for(auto j:bobSizes){
            if(s.find(j-diff)!=s.end())   //  to search an element in the set.
            {
                ans.push_back(j-diff);
                ans.push_back(j);
                return ans;
            }
        }
        return ans;
    }
};
