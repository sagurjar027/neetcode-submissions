class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0;
        int h = n-1;
        vector<int> ans;
        while(l<h){
            if((nums[l]+nums[h])>target){
                h--;
            }else if((nums[h]+nums[l])<target){
                l++;
            }else{
                ans.push_back(l+1);
                ans.push_back(h+1);
                return ans;
            }
        }
        return ans;
    }
};
