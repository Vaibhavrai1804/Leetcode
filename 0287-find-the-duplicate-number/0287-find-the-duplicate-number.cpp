class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();

        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            //i is in zero index
            if(i==0){
                if(nums[0]==nums[1]){
                    return nums[i];
                }
            }
            else if(i==n-1){
                break;
            }
            else{
                if(nums[i]==nums[i+1]){
                    return nums[i];
                }

            }
        }
        return -1;
        
    }
};