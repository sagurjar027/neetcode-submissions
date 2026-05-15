class Solution {
public:
    bool isPalindrome(string s) {
        string k = "";
        for (char c : s) {
            if (isalnum(c)) {
                k += tolower(c);
            }
        }
        int n= k.size();
        int l =0;
        int r =n-1;
        while(l<r){
            if(k[l]!=k[r]){
                return false;
            }
            r--;
            l++;
        }
        return true;
    }
};
