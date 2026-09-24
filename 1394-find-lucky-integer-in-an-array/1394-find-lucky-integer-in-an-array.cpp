class Solution {
public:
    int findLucky(vector<int>& arr) {
        int max_num=-1;
        vector<int> freq(501,0);
        for(int i=0;i<arr.size();i++){
            freq[arr[i]]++;
        }
        for(int i=1;i<freq.size();i++){
            if(i==freq[i]){
                max_num=max(max_num,freq[i]);
            }


        }
        return max_num;
        
    }
};