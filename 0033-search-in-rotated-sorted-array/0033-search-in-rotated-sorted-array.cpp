class Solution {
public:
        int search(vector<int>& a, int target) {
        int n=a.size();
        int l=0, r=n-1;
        
        while(l<=r){
            int m=(l+r)/2;
            if(a[m]==target) return m;
            if(a[m]>a[n-1]){ // left side of peak element
                if(target>a[m] || target<a[0]){
                    l=m+1;
                }else{
                    r=m-1;
                }
            }else{ // right side of peak element
                if(target<a[m] || target>a[n-1]){
                    r=m-1;
                }else{
                    l=m+1;
                }
            }
        }
      return -1;
    }

};