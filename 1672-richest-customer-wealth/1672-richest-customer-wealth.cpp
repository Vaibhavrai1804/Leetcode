class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m=accounts.size();
        int n =accounts[0].size();
        int sum=-1;
        for(int i=0;i<m;i++){
            int total=0;
            for(int j=0;j<n;j++){
                total+=accounts[i][j];
            }
            sum=max(sum,total);
        }
        return sum;
        
    }
};