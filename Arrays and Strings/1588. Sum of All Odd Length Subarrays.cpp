class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int s = 0;
        for(int i=0; i<arr.size(); i++) {
            int a = 0;
            for(int j=i; j<arr.size(); j++) {
                a += arr[j];
                s += a * (((j-i+1) % 2));
            }   
        }
        return s;
    }
};
