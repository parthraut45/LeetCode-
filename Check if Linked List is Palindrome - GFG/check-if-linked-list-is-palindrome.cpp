//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/
#include<vector>
class Solution {
public:
    bool check(vector<int> arr) {
        int n = arr.size();
        int start = 0;
        int end = n - 1;
        while (start <= end) {
            if (arr[start] != arr[end]) {
                return false; 
            }
            start++;
            end--;
        }
        return true;
    }

    bool isPalindrome(Node* head) {
        //code here
        Node* ele = head;
        vector<int> arr;
        while (ele != NULL) {
            arr.push_back(ele->data);
            ele = ele->next;
        }
        return check(arr);
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends