class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        unordered_map<char,int> sec;
        unordered_map<int,int> fir;
        for(int i=0;i<suits.size();i++){
            sec[suits[i]]++;
            fir[ranks[i]]++;
        }
        string ans;
        if(sec.size()==1){
            ans="Flush";
            return ans;
        }
        for(auto it:fir){
            if(it.second>=3){
                ans="Three of a Kind";
                return ans;
            }
        }
        for(auto it:fir){
            if(it.second==2){
                ans="Pair";
                return ans;
            }
        }
        ans="High Card";
        return ans;
    }  
};