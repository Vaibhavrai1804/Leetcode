class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int closest = nums[0] + nums[1] + nums[2];
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]){
                continue;
            }
            int j=i+1;
            int k=n-1;
            while(j<k){
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(sum-target)<abs(closest-target)){
                    closest=sum;
                }
                if(sum>target){
                    k--;
                }
                else if(sum<target){
                    j++;
                }
                else{
                    return sum;
                }
                
            }
        }
        return closest;;
        
    }
};