//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
#define mod 1000000007
  
  
    int solveT(int n, vector<long long int>&dp2){
        dp2[0]=0;
        dp2[1]=1;
        for(int i=2; i<=n; i++){
            dp2[i]=(dp2[i-1])%mod+(dp2[i-2])%mod;
        }
        return (dp2[n]%mod);
    }
  
    int solveM(int n, vector<long long int>&dp){
        if(n<=1) return n%mod;
        if(dp[n]!=-1) return dp[n]%mod;
        return dp[n]=solveM(n-1, dp)%mod+solveM(n-2, dp)%mod;
    }
  
    long long int topDown(int n) {
        // code here
        vector<long long int>dp(n+1, -1);
        long long int ans1=(solveM(n, dp))%mod;
        return (ans1%mod);
        
    }
    long long int bottomUp(int n) {
        // code here
        vector<long long int>dp2(n+1);
        long long int ans2=(solveT(n, dp2)%mod);
        return (ans2%mod);
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution obj;
        long long int topDownans = obj.topDown(n);
        long long int bottomUpans = obj.bottomUp(n);
        if (topDownans != bottomUpans) cout << -1 << "\n";
        cout << topDownans << "\n";
    }
}
// } Driver Code Ends