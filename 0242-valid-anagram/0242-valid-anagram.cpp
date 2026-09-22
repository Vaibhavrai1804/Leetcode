class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> freqs(26,0);
        vector<int> freqt(26,0);
        int size_1=s.size();
        int size_2=t.size();
        for(int i=0;i<size_1;i++){
            freqs[s[i]-'a']++;
        }
        for(int i=0;i<size_2;i++){
            freqt[t[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(freqs[i]!=freqt[i]){
                return false;
            }
            
        }
        return true;

        
    }
};