class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n==0) return 0;
        unordered_map<int,int> m;
        int l = 0, r= 0;
        int ans = 0;
        while(r<n){
            if(m.find(s[r])==m.end()){
                m[s[r]] = r;
            }else{
                ans = max(ans,r-l);
                l = max(l,m[s[r]]+1);
                m[s[r]] = r;
            }
            r++;
        }
        ans = max(ans,r-l);
        return ans;
    }
};
