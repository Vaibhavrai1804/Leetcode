class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int m=mat.size(),n=mat[0].size();
        vector<vector<int>> temp(m,vector<int>(m));

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                temp[i][j]=mat[m-1-j][i];
            }
        }
        mat=temp;
        
        
    }
};