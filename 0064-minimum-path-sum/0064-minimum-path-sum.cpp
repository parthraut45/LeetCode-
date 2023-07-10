class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
       int a = grid.size();
       int b = grid[0].size();
       int dp[a][b];
       for(int i = a - 1 ; i >= 0 ; i--){
       for(int j = b - 1 ; j >= 0 ; j--){
          if(i == a - 1 && j == b - 1) dp[i][j] = grid[a-1][b-1];
          else{
              dp[i][j] = grid[i][j] + min((i < a-1)?dp[i+1][j]:INT_MAX , (j < b -1)?dp[i][j+1]:INT_MAX);
          }
      }
       }
        return dp[0][0];
    }
};