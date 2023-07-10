//{ Driver Code Starts
//Initial template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template in C++

class Solution
{
    public:
    //Function to find total number of unique paths.
int NumberOfPath(int a, int b)
{
  int dp[a][b];
  for(int i = a - 1 ; i >= 0 ; i--){
      for(int j = b - 1 ; j >= 0 ; j--){
          if(i == a - 1 && j == b - 1) dp[i][j] =1;
          else{
              int right = 0;
              int down = 0;
              if(i < a-1) down = dp[i+1][j];
              if(j < b-1) right = dp[i][j+1];
              dp[i][j] = down + right;
          }
      }
  }
  return dp[0][0];
}
};


//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //taking dimensions of the matrix
        int a,b;
        cin>>a>>b;
        Solution ob;
        //calling NumberOfPath() function
        cout << ob.NumberOfPath(a,b) << endl;
    }
}


// } Driver Code Ends