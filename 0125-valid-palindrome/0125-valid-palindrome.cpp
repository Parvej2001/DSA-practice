class Solution {
public:
    bool isPalindrome(string s)
{
    // string str = "";
    // for (int i = 0; i < s.size(); i++)
    // {
    //     if (isalnum(s[i])) // check if a character is alphanumeric or not
    //         str.push_back(tolower(s[i]));
    // }
    // for (int i = 0; i < str.size() / 2; i++)
    // {
    //     if (str[i] != str[str.size() - 1 - i]) // if str is a palindrome then this condition would always be false
    //         return false;
    // }
    // return true;
        
        int i = 0;
        int j = s.size() - 1;
        
        while (i < j) {
            while (!isalnum(s[i]) && i < j) {
                i++;
            }
            while (!isalnum(s[j]) && i < j) {
                j--;
            }
            if (tolower(s[i]) != tolower(s[j])) {
                return false;
            }
            i++;
            j--;
        }
        
        return true;
}
};