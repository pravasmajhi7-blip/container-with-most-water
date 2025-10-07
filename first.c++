class Solution {
public:
    int maxArea(vector<int>& height) {
    int maxwater=1;
        int n=height.size();
 for(int i=0,j=n-1;i<j;){
     if(height[i]>=height[j]){
  maxwater=min(height[i],height[j])*
      (j-i); } i++; }
  return maxwater; }
};