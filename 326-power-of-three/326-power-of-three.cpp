class Solution {
public:
    bool isPowerOfThree(int n) {
        
    //     for(int i=0; i<31; i++){
    //         double ans = pow(3,i);
    //         if(ans==n){
    //             return true;
    //         }
    //     }
    //     return false;
    // }
        if (n<=0) return false;
        if (n == 1) return true;
        return (n%3==0 && isPowerOfThree(n/3));
}
};