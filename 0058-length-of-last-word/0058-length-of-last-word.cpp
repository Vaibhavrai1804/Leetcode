class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int freq=0;
        for(int i=n-1;i>=0;i--){
            if(freq==0){
                if(s[i]==' '){
                    continue;
                }
                else{
                    freq=freq+1;
                }
            }
            else{
                if(s[i]==' '){
                    break;
                }
                else{
                    freq=freq+1;
                }

            }

        }
        return freq;
     
        
    }
};