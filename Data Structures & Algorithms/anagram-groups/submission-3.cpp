class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> res;
        for(const auto&ch : strs){
            string s = ch;
            sort(s.begin(),s.end());
            res[s].push_back(ch);
        }
        vector<vector<string>> ans;
        for(auto&t : res){
            ans.push_back(t.second);
        }
        return ans;
    }
};
