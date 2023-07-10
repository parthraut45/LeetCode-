class Solution {
public:
    int uniquePaths(int a, int b) {
  int dp[a][b];
  for(int i = a - 1 ; i >= 0 ; i--){
      for(int j = b - 1 ; j >= 0 ; j--){
          if(i == a - 1 && j == b - 1) dp[i][j] =1;
          else{
              long long right = 0;
              long long down = 0;
              if(i < a-1) down = dp[i+1][j];
              if(j < b-1) right = dp[i][j+1];
              dp[i][j] = down + right;
          }
      }
  }
  return dp[0][0];
}
};