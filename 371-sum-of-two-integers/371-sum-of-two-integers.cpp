class Solution {
public:
    int getSum(int a, int b) {
      
          // (a^b) basically gives sum of two integers directly(try returning a^b to sample test case) but we need to deal with carry 
        
        // So here is the deal: we are storing value of a&b to carry: that is if there are set-bits at one position in a as well as b
        //carry will be 1 and a will store a^b, if we have set-bits in both integers, then their xor will actually 
        // return 0 and carry 1 to one position left. Then b is processing that for the next step, by left-shifting all the positions where both are 
        // set-bits so that we can add those to our ans(a here) in the next step
        // we will repeat procedure till b(or carry) becomes zero
	// unsigned int because a or b can be negative and we cannot do left-shifts to negative integers. Unsigned int is always +ve  
        unsigned int carry;
        while(b !=0 ){
            carry=a&b;
            a=a^b;
            b=carry<<1;
        }
        return a;
        
    }
};
