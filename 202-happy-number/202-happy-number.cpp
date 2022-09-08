// THE PROBLEM IS SOLVED BY FLOYDS CYCLE DETECTION
class Solution {
public:
    
    int calculate(int n){
        int sum = 0;
        while(n){
            int dig = n % 10;
            sum += (dig * dig);
            n /= 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int slow = n;
        int fast = calculate(n);
        
        while(fast != 1 && slow != fast){
            slow = calculate(slow);
            fast = calculate(calculate(fast));
        }
        
        return fast == 1;
    }
};
