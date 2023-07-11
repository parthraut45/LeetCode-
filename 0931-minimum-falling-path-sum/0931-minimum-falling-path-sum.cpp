class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int r=matrix.size();
        int c=matrix[0].size();
        int mani=INT_MAX;
        vector<vector<int>>dp(r,vector<int>(c,0));
            //initialisation
        for(int i=0;i<c;i++){
           dp[0][i] = matrix[0][i];
        }
        //dp code
        for(int row=1;row<r;row++){
            for(int col=0;col<c;col++){
               
                int up=matrix[row][col]+dp[row-1][col];

                int leftD=matrix[row][col];
                if(col-1>=0) leftD+=dp[row-1][col-1];
                else leftD+=1e8;

                int rightD=matrix[row][col];
                if(col+1<c) rightD+=dp[row-1][col+1];
                else rightD+=1e8;
    
                dp[row][col] = min(up,min(leftD,rightD));
            }
        }


        for(int i=0;i<c;i++){
            mani=min(mani,dp[r-1][i]);
        }
        return mani;
    }
};