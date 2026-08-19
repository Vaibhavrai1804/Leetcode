class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN;
        int curr_sum=0;
        for(int i : nums){
            curr_sum+=i;
            maxsum=max(curr_sum,maxsum);
            if(curr_sum<0){
                curr_sum=0;
            }
        }
    return maxsum ;
        
    }
    
};