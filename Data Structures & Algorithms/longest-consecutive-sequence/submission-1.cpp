class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        int ans  = INT_MIN;
        int q = 0;
        unordered_map<int,int> m;
        for(int i=0;i<n;i++){
            m[nums[i]] = nums[i]+1;
        }
        int k;
        for(auto t : m){
            k = t.first;
            if(m.find(k-1)==m.end()){
            q = 0;
            while(m.find(k)!=m.end()){
                q++;
                k = m[k];
            }
            ans = max(ans,q);
        }
        }
        return ans;
    }
};
