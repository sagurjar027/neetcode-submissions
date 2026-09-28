class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.size();
        int n2 = s2.size();
        if(n1>n2)return false;
        unordered_map<int,int> m1;
        for(int i=0;i<n1;i++){
            m1[s1[i]]++;
        }
        for(int i=0;i<=n2-n1;i++){
            int j = i;
            unordered_map<int,int>m2;
            while(j<n1+i&&j<n2){
                m2[s2[j]]++;
                j++;
            }
            if(m1==m2) return true;
        }

        return false;
    }
};
