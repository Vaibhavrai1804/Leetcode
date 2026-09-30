class Solution {
public:
    void subsets(vector<int>& nums,vector<int> & ans,int i,vector<vector<int>> & allsubsets){
        if(i==nums.size()){
            allsubsets.push_back({ans});
            return;
        }
        //include
        ans.push_back(nums[i]);
        subsets(nums,ans,i+1,allsubsets);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[idx-1]){
            idx++;
        }
        subsets(nums,ans,idx,allsubsets);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> allsubsets;
        vector<int> ans;
        subsets(nums,ans,0,allsubsets);
        return allsubsets;

        
    }
};