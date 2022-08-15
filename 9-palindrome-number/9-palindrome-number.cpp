class Solution {
public:
    bool isPalindrome(int x) {
        
        if(x<0 || x>pow(2,31))  // according to the condition value of 'x' should be in this range.
            return false;
        long int num = 0;
        int y=x;  
        
        while(x>0){
            num=num*10;
            if(num >pow(2,31))
                return false;
            num=num+(x%10);
            x=x/10;
        }
        if(num==y)
            return true;
        else
            return false;
        
    }
};
