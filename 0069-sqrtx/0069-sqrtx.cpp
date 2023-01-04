class Solution {
public:
    
    long long int Binarysearch(int n)
    {
        int s=0;
        int e=n;
        long long int  mid=s+(e-s)/2;
        long long int ans = -1;
        
        while(s<=e)
        {
            long long int sqr=mid*mid;
            if(sqr==n)
                return mid;
            if(sqr<n){
                ans=mid;
                s=mid+1;
            }else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
         return ans;
    }
    
    
    int mySqrt(int x) {
        
        return Binarysearch(x);
    }
};