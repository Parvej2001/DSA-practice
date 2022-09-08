class Solution {
public:
    void helper(int &n, int d){
        if(n%d != 0)
            return;
        n = n/d;
        helper(n, d);
    }
    bool isUgly(int n) {
        if(n == 0)
            return false;
        // Try Not to change the input n (Not reccommended)
        int k = n;
        
        // Keep on dividing number with 2 , 3 and 5 until no other divisions possible
        // if after all those divisions number == 1 then it is ugly (only 2,3 and 5 are p.factors)
        helper(k,2);
        if(k!=1)
            helper(k,3);
        if(k!=1)
            helper(k,5);
        if(k!=1)
            return false;
        return true;
    }
};