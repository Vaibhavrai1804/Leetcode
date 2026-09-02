class Solution {
public:
    bool isValid(vector<int>& arr,int mid,int n,int m){
        int ball=1,lastpos=arr[0];
        for(int i=1;i<n;i++){
            if(arr[i]-lastpos>=mid){
                ball++;
                lastpos=arr[i];
            }
            if(ball==m){
                return true;
            }
        }
        return false;
    }
    int maxDistance(vector<int>& arr, int m) {
        int n =arr.size();
        sort(arr.begin(),arr.end());
        int st=1,end=arr[n-1]-st,ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            if(isValid(arr,mid,n,m)){ // valid then go to right for larger value 
                st=mid+1;
                ans=mid;
            }
            else{ //not valid go to left for smaller value 
                end=mid-1;
            }
        }
        return ans;

        
    }
};