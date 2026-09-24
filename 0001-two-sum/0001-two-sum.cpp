class Solution {
public:
    int index(vector<int>& nums,int x,int loop){
        for(int i=loop+1;i<nums.size();i++){
            if(nums[i]==x){
                return i;
            }
        }
        return -1;
    }
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int>ans;
        
        for(int i=0;i<n;i++){
            if(target==nums[i] && target<nums[i]){
                continue;
            }
            else{
                int required=target-nums[i];
                int value=index(nums,required,i);
                if(value==-1){
                    continue;
                }
                else{
                    ans.push_back(i);
                    ans.push_back(value);
                    break;
                }
            }

        }
        return ans;
        
    }
};