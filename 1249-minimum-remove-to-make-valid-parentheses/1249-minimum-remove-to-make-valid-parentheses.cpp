class Solution {
public:
    string minRemoveToMakeValid(string s) {
       stack<char>st;
        string ans = "";
        int open = 0;
        int close = 0;
        for(auto ch : s){
            if(ch != '(' && ch != ')'){
                st.push(ch);
            }
            else if(ch == '('){
                st.push(ch);
                open++;
            }
            else if(open>0){
                st.push(ch);
                open--;
            }
            
        }
        open = 0 , close = 0;
        
        while(!st.empty()){
            int c = st.top();
            st.pop();
            if(c != '(' && c != ')'){
                ans+=c;
            }
            else if(c == ')'){
                ans+=c;
                close++;
            }
            else if(close>0){
                ans+=c;
                close--;
            }
        }
        reverse(ans.begin() , ans.end());
        return ans;
    }
};