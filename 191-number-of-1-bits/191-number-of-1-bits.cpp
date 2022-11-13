class Solution {
public:
    int hammingWeight(uint32_t n) {   // hammingweight means number of '1' bits
        
        int count = 0;
        
        while(n!=0){
            //checking last digit
            if(n&1){      
                count++;
            }
            n=n>>1;   //   right shift the given bits by 1
        }
        return count;
    }
};
