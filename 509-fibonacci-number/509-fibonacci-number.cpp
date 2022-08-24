class Solution {
public:
    int fib(int n) { 
           // this problem is based on recursion but still need to study . initially i wrote program for fibonacci series but then i realise
        // its something different.
 //         int a=0, b=1, c;  
//         for(int i=0; i<n; i++)
//         {
//             c=a+b;
//             a=b;
//             b=c;
//         }
//         return c;
        
        // here the main code
         if(n < 2)
            return n;
        return fib(n-1) + fib(n-2);
    }
};

