class Solution {
public:
    double myPow(double x, int n) {
      // Mysolution
        /*  long double ans;
        
        ans=pow(x,n);
        return ans; */
        
    // Using recursion     
         /*if(n<0) return 1/x*myPow(1/x, -(n+1));
        
        if(n==0) return 1;
        if(n==1) return x;
        if(n==2) return x*x;
        if((n&1)==0) return myPow(myPow(x, n/2), 2);
        else return x*myPow(myPow(x, n/2), 2); */
        
    // using striver approach
         if(n==0){return 1;}
    else if(n==1){return x;}
    else if(n>0){
        if(n%2==0){
            x=x*x;
            n= n/2;   
        }
            return x*myPow(x,n-1);
    }
    else {
        if(n%2==0){
            x=x*x;
            n= n/2;   
        }
            return 1/x*myPow(x,n+1);
    }

    }
};