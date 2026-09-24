class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int row=mat.size();
        int primary=0;
        int secondary=0;
        
        for(int i=0;i<row;i++){
            primary+=mat[i][i];
            secondary+=mat[i][row-1-i];        
        }
        if(row%2!=0){
            int common=(row-1)/2;
            return primary+secondary-mat[common][common];
        }
        return primary+secondary;


        
    }
};