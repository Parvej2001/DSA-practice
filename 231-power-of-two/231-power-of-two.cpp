class Solution {
public:
    bool isPowerOfTwo(int n) {
        
        for(int i=0; i<31; i++){       // the loop will run upto 2^31 i.e till 30
            
          int ans= pow(2,i);
            if(ans==n){
            return true;
            }
        }
        return false;
    }
};
