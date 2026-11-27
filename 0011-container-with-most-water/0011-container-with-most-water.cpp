class Solution {
public:
    int maxArea(vector<int>& height) {
        int a=height.size();
        int left=0;
        int right=a-1;
        int area=0;
        while(left<right){
            int width=min(height[left],height[right]);
            int dis=right-left;
            area=max(area,dis*width);
            if(height[left]>height[right]){
                right--;
            }
            else left++;
        }
        return area;
    }
};