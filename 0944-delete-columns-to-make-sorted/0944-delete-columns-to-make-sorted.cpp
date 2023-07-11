class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        //count no. of rows and colmns
        
        int row=strs.size();
        int col=strs[0].size();
        
        // store the ans
        int ans=0;
        
        // Traverse column wise and for each row
        
        for (int i=0; i<col; i++)
        {
            for(int j=1; j<row; j++)
            {
                if(strs[j-1][i]>strs[j][i])
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;
    }
};
