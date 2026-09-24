class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;
        vector<int> ans(n,0);
        long long prod = 1;
        for(int num : nums){
            if(num != 0 ){
                prod *= num;
            }else{
                zero++;
            }
        }
        if(zero > 1){
            return ans;
        }
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                if(zero == 1){
                    ans[i] = 0;
                }else{
                ans[i] = prod/nums[i];
                }
            }else{
                ans[i] = prod;
            }
        }
        return ans;
    }
};
