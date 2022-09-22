class Solution {
public:
    
    vector<vector<int>> generate(int numRows) {
      vector<vector<int>> r(numRows);  // creating a dynamic vector and keeping it empty
        
        for(int i=0; i<numRows; i++) // traversing through the 'n' rows 
        {
            r[i].resize(i+1);  // since the row was empty , resizeing it
            r[i][0]=r[i][i]=1;  // as first and last column in the triangle is 1 , hence initializing with 1
            
            for(int j=1; j<i; j++) // now linearly traversing from first column to the last column
                r[i][j]=r[i-1][j-1]+r[i-1][j];     // adding the previous value
        }
        return r;
    }
};
