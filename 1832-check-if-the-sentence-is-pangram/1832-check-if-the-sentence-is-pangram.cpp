class Solution {
public:
    bool checkIfPangram(string sentence) {
        int n=sentence.size();
        // here i have used STL 'map' (where map is a container that stores elements in key-value pairs.)
        map<char,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[sentence[i]]++;
        }
        if(mp.size()!=26)
        {
            return false;
        }
        return true;
    }
};
