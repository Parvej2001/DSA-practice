class Solution {
public:
    int fib(int n) { 
         
 //         int a=0, b=1, c;  
//         for(int i=0; i<n; i++)
//         {
//             c=a+b;
//             a=b;
//             b=c;
//         }
//         return c;
         if(n < 2)
            return n;
        return fib(n-1) + fib(n-2);
    }
};

