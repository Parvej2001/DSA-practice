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

// neet code solution
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         for (int i = digits.size() - 1; i >= 0; i--) {
//             if (digits[i] < 9) {
//                 digits[i]++;
//                 return digits;
//             }
//             digits[i] = 0;
//         }
        
//         digits[0] = 1;
//         digits.push_back(0);
//         return digits;
//     }
// };

// Fraz solution

class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        
        for(int i=d.size()-1; i>=0; i--)
        {
            if(d[i]<9){
                d[i]++;
                return d;
            }else{
                d[i]=0;
            }
        }
        d.push_back(0);
        d[0]=1;
        return d;
        
    }
};












