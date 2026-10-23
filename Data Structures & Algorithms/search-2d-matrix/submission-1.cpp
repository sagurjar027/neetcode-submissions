class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int cols = matrix[0].size();
        int l = 0;
        int r = rows*cols-1;
        while(l<= r){
            int m  = l+(r-l)/2;
            int val = matrix[m/cols][m%cols];
            if(target == val){
            return true;
            }else if(target < val){
                r= m-1;
            }else{
                l = m+1;
            }
        }

        return false;
    }
};
