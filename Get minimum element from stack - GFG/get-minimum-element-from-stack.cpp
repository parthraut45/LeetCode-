//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       vector<pair<int,int>>st;
       int getMin(){
            if(st.empty()){
               return -1;
           }
           
        return st.back().second;
       }
       
       /*returns poped element from stack*/
       int pop(){
           if(st.empty()){
               return -1;
           }
           int ans=st.back().first;
           st.pop_back();
           return ans;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
              if(st.empty()){
               pair<int,int>p=make_pair(x,x);
               st.push_back(p);
           }
           else{
               pair<int,int>p;
               p.first=x;
               p.second=min(x,st.back().second);
                st.push_back(p);
           }
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends