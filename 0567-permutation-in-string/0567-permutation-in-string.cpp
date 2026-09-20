class Solution {
public:
     bool isfreqsame(int freq[], int freq_2[]) {
        for(int i = 0; i < 26; i++) {
            if(freq[i] != freq_2[i]) {
                return false;
            }
        }
        return true;
    }

    bool checkInclusion(string s1, string s2) {
        int size_1 = s1.size();
        int size_2 = s2.size();

        // Frequency of each character
        int freq[26] = {0};

        for(int i = 0; i < size_1; i++) {
            freq[s1[i] - 'a']++;
        }

        int freq_2[26] = {0};

        for(int i = 0; i < size_2; i++) {
            int windidx = 0, idx = i;

            while(windidx < size_1 && idx < size_2) {
                freq_2[s2[idx] - 'a']++;
                windidx++;
                idx++;
            }

            if(isfreqsame(freq, freq_2)) {
                return true;
            }

            // Reset frequency for next window
            for(int j = 0; j < 26; j++) {
                freq_2[j] = 0;
            }
        }

        return false;
    }
};