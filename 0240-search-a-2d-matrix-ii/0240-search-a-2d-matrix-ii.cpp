class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row=mat.size();
        int column=mat[0].size();
        int m=0;
        int n =column-1;
        while(m<row && n>=0){
            if(target==mat[m][n]){
                return true;
            }
            else if(target<mat[m][n]){
                n--;

            }
            else{
                m++;
            }
        }
        return false;
        
    }
};