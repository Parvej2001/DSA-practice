class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        size_t i = digits.size();
        while (++digits[--i] == 10)
        {
            digits[i] = 0;
            if (!i)
            {
                digits.insert(digits.begin(), 1);
                break;
            }            
        }
        return digits;
    }
};