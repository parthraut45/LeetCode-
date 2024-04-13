class Solution {
public:
    int trap(vector<int>& height) {
       int left = 0;
       int n = height.size();
       int right = n - 1;
       int maxleft = 0;
       int maxright = 0;
        int res = 0;
       while(left <= right){
           if(height[left] <= height[right]){
               if(height[left] >= maxleft) maxleft = height[left];
               else res += maxleft - height[left];
               left++;
           }
           else{
               if(height[right]>= maxright) maxright = height[right];
               else res += maxright - height[right];
               right--;
           }
           
       }
        return res;
        
        
        
    }
};