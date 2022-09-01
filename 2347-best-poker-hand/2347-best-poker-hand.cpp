class Solution {
public:
    string bestHand(vector<int>& ranks, vector<char>& suits) {
        // unordered_map<char,int> sec;
        // unordered_map<int,int> fir;
        // for(int i=0;i<suits.size();i++){
        //     sec[suits[i]]++;
        //     fir[ranks[i]]++;
        // }
        // string ans;
        // if(sec.size()==1){
        //     ans="Flush";
        //     return ans;
        // }
        // for(auto it:fir){
        //     if(it.second>=3){
        //         ans="Three of a Kind";
        //         return ans;
        //     }
        // }
        // for(auto it:fir){
        //     if(it.second==2){
        //         ans="Pair";
        //         return ans;
        //     }
        // }
        // ans="High Card";
        // return ans;
    int f=0;
    for(int i=1; i<5; i++){
        if(suits[i]!=suits[i-1]) f=1;
    }
    if(f==0) return "Flush";
    unordered_map<int,int>m;
    for(auto x: ranks){
        m[x]++;
    }
    for(auto x: m){
        if(x.second>=3) return "Three of a Kind";
    }
    for(auto x: m){
        if(x.second==2) return "Pair";
    }
    return "High Card";
    }  
};