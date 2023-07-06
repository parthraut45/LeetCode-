class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
        string result = "";
        for (int i = a.size() - 1, j = b.size() - 1; i >= 0 || j >= 0; i--, j--) {
            int p = 0;
            if (i >= 0) {
                p = a[i] - '0';
            }
            int q = 0;
            if (j >= 0) {
                q = b[j] - '0';
            }
            int sum = carry + p + q;
            result = to_string(sum % 2) + result;
            carry = sum / 2;
        }
        if (carry == 1) {
        result = "1" + result;
        }
        return result;
    }
};
