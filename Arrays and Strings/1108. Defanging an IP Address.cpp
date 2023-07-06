class Solution {
public:
    string defangIPaddr(string address) {
        string add = "[.]";
        string res = "";
        for(int i = 0; i < address.length(); i++){
            if(address[i]=='.'){
                res+=add;
            }
            else{
                res+=address[i];
            }
        }
        return res;
    }
};
