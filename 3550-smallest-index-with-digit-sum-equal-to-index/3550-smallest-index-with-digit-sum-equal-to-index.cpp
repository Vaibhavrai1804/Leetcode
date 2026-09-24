class Solution {
public:
    int digit(int num){
        int sum=0;
        while(num>0){
            int rem=num%10;
            sum+=rem;
            num=num/10;
        }
        return sum;
    }
    int smallestIndex(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i==digit(nums[i])){
                return i;
            }
        }
        return -1;
        
    }
};