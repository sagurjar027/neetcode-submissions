class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int min_price = nums[0];
        for(int i=1;i<n;i++){
            ans = max(ans,nums[i]-min_price);
            min_price = min(min_price,nums[i]);
        }
        return ans;
    }
};
