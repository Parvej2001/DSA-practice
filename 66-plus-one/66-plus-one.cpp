// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         size_t i = digits.size();
//         while (++digits[--i] == 10)
//         {
//             digits[i] = 0;
//             if (!i)
//             {
//                 digits.insert(digits.begin(), 1);
//                 break;
//             }            
//         }
//         return digits;
//     }
// };
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i = digits.size() - 1; i >= 0; i--) {
            if (digits[i] < 9) {
                digits[i]++;
                return digits;
            }
            digits[i] = 0;
        }
        
        digits[0] = 1;
        digits.push_back(0);
        return digits;
    }
};