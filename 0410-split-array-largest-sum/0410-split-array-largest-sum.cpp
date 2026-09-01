class Solution {
public:
    bool isValid(vector<int>& arr,int mid,int k,int n ){
        int nums=1, sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                return false;
            }
            if(sum+arr[i]<=mid){
                sum+=arr[i];
            }
            else{
                nums++;
                sum=arr[i];
            }

        }
        return (k>=nums);

    }

    int splitArray(vector<int>& arr, int k) {
        int n=arr.size();
        int total_sum=0;
        for (int i=0;i<n;i++){
            total_sum+=arr[i];
        } 
        int st=0,end=total_sum;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(arr,mid,k,n)){ //mid is valid
                end=mid-1;
                ans=mid;
            }
            else{   //mid isn't valid
                st=mid+1;
            }
        }
        return ans;
        return 0;
        
    }
};