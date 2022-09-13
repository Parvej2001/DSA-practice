// My solution an easy soluttion 
class Solution {
public:
    bool isPowerOfFour(int n) {
         for(int i=0; i<31; i++){
            double ans = pow(4,i);
            if(ans==n){
                return true;
            }
        }
        return false;
    }
};
