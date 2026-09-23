class Solution {
public:
    bool searchinrow(vector<vector<int>>& mat, int target,int row){
        int n=mat[0].size();
        int start=0;
        int end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(target==mat[row][mid]){
                return true;
            }
            else{
                if(target>mat[row][mid]){
                    start=mid+1;
                }
                else{
                    end=mid-1;
                }
            }
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        //apply bs on row 
        int m=mat.size();
        int n=mat[0].size();
        int sr=0,er=m-1;
        while(sr<=er){
            int mr=sr+(er-sr)/2;
            if(target>=mat[mr][0] && target<=mat[mr][n-1]){
                //found the row 
                return searchinrow(mat,target,mr);
            }
            else{
                if(target>mat[mr][n-1]){
                    sr=mr+1;
                }
                else{
                    er=mr-1;
                }
            }
        }
        return false;

        
    }
};