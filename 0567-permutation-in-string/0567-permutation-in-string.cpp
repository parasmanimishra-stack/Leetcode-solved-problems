class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n = s1.size();
        int m = s2.size();
        unordered_map<char, int> freq;
        for(auto ch : s1) freq[ch]++;

        int start = 0;
        int match = 0;
        for(int end = 0; end < m; end++){
            char ch = s2[end];

            if(freq[ch] > 0) match++;

            freq[ch]--;
            if(end - start +1 > n){
                char out = s2[start];
                if(freq[out] >= 0) match--;
                freq[out]++;
                start++;
            }
            if(match == n) return true;
        }
        return false;

        
    }
};