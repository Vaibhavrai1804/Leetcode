class Solution {
public:
    bool ispalindrome(string part){
        int i=0,j=part.size()-1;
        while(i<=j){
            if(part[i]!=part[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    void getallparts(string s,vector<string>& partition,vector<vector<string>> &ans){
        //base case
        if(s.size()==0){
            ans.push_back(partition);
        }
        for(int i=0;i<s.size();i++){
            string part=s.substr(0,i+1);
            if(ispalindrome(part)){
                partition.push_back(part);
                //next call
                getallparts(s.substr(i+1),partition,ans);
                //bactrack
                partition.pop_back();
            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<string> partition;
        vector<vector<string>> ans;
        getallparts(s,partition,ans);
        return ans;
    }
};