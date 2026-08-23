class Solution {
public:
    int maxArea(vector<int>& height) {
        int n =height.size();
        int max_area=0;
        int left=0;
        int right=n-1;
        while(left<right){
            int breadth=right-left;
            int length=min(height[left],height[right]);
            int ans=breadth*length;
            max_area=max(max_area,ans);
            height[left]<height[right] ? left++ : right--;
        }
        return max_area; 
    }      
};