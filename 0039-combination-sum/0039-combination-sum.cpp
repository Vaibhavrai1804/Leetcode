class Solution {
public:
    set<vector<int>> s;
    void targetsum(vector<int>& arr,int i,vector<int> &comb,vector<vector<int>> &ans, int target){
        if(i==arr.size() || target<0){
            return;
        }
        if(target==0){
            if(s.find(comb)==s.end()){
                ans.push_back(comb);
                s.insert(comb);
            }
            
            return;
        }
        //single time include
        comb.push_back(arr[i]);
        targetsum(arr,i+1,comb,ans,target-arr[i]);
        //multiple time include
        targetsum(arr,i,comb,ans,target-arr[i]);
        //exclude 
        comb.pop_back();
        targetsum(arr,i+1,comb,ans,target);

    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<int> comb;
        vector<vector<int>> ans;
        targetsum(arr,0,comb,ans,target);
        return ans;
    }
};