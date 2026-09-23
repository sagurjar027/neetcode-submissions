class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            int k = target-nums[i];
            if(freq.contains(k)){
                return {freq[k],i};
            }
            freq[nums[i]] = i;
        }
        return {};
    }
};
