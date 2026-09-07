class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int l = 0;
        int h = n-1;
        int ans = INT_MIN;
        while(l<h){
            int j = min(height[l],height[h]);
            int w = h-l;
            int area = j*w;
            ans = max(area, ans);
            if(height[l]<height[h]){
                l++;
            }else{
                h--;
            }
        }
        return ans;
    }
};
