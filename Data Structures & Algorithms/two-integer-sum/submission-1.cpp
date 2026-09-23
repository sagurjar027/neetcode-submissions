class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]] = i;
        }
        for(int i=0;i<n;i++){
            int k = target-nums[i];
            auto it = freq.find(k);
            if (it != freq.end() && it->second != i) {
                return {i, it->second};
            }
        }
        return {};
    }
};
