//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
   int findK(int a[MAX][MAX],int n,int m,int k)
    {
 		int cnt = 0;
 		vector<int>spiral;
 		int total = n*m;
 		int startingRow = 0;
 		int startingCol = 0;
 		int endingRow = n-1;
 		int endingCol = m-1;
 		while(cnt < total){
 		 //   for traversing first row
 		    for(int i = startingCol;cnt<total && i<=endingCol; i++){
 		        spiral.push_back(a[startingRow][i]);
 		        cnt++;
 		    }
 		    startingRow++;
 		 //   for traversing last col
 		    for(int i = startingRow; cnt<total && i<=endingRow;i++){
 		        spiral.push_back(a[i][endingCol]);
 		        cnt++;
 		    }
 		    endingCol--;
 		 //   for traversing  last row
 		    for(int i = endingCol; cnt<total && i>=startingCol;i--){
 		        spiral.push_back(a[endingRow][i]);
 		        cnt++;
 		    }
 		    endingRow--;
 		 //   for traversing first col
 		    for(int i = endingRow; cnt<total && i>=startingRow;i--){
 		        spiral.push_back(a[i][startingCol]);
 		        cnt++;
 		    }
 		    startingCol++;
 		}
 		return spiral[k-1];
    }
};




//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends