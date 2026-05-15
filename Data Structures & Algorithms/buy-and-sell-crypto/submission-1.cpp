class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int l =0;
        int r =n-1;
        int ans =0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                ans = max(ans,(nums[j]-nums[i]));
            }
        }
        return ans;
    }
};
