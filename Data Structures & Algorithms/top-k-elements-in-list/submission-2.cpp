class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> freq;
        for(int i=0;i<n;i++){
            freq[nums[i]]++;
        }
        vector<pair<int, int>> elems(freq.begin(), freq.end());
        sort(elems.begin(), elems.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });
        for(int i = 0; i < k; i++){
            ans.push_back(elems[i].first);
        }
        return ans;
    }
};
