class Solution {
public:
    bool isValid(vector<int>& arr,int mid,int d,int n){
        int day=1,weight=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid){
                return false;
            }
            if(arr[i]+weight<=mid){
                weight+=arr[i];
            }
            else{
                day++;
                weight=arr[i];
            }
        }
        return(day<=d);
    }
    int shipWithinDays(vector<int>& arr, int d) {
        int n=arr.size();
        int total_sum=0;
        for(int i=0;i<n;i++){
            total_sum+=arr[i];
        }
        int st=0,end=total_sum,ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(arr,mid,d,n)){ //if mid is valid then go to left 
                end=mid-1;
                ans=mid;
            }
            else{
                st=mid+1;
            }
        }
        return ans;
        
    }
};