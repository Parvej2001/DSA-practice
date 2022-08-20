class Solution {
public:
    int reverse(int x) {
        
        int ans=0;   
        while(x!=0){
            
            int digit=x%10;    // taking last number 
            
            if((ans>INT_MAX/10) || ans<INT_MIN/10 ){  // checking the range
                return 0;
            }
            
            ans=(ans*10) + digit;   // storing the number
            x=x/10;     // taking qoutient i.e updating the number
        }
    return ans;
    }
};