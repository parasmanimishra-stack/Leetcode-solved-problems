class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size();
        int m = p.size();
        vector<int> ans;
        unordered_map<char, int> freq;
        for(auto ch : p) freq[ch]++;

        int start = 0;
        int match = 0;
        for(int end = 0; end < n; end++){
            char ch = s[end];

            if(freq[ch] > 0) match++;

            freq[ch]--;
            if(end - start +1 > m){
                char out = s[start];
                if(freq[out] >= 0) match--;
                freq[out]++;
                start++;
            }
            if(match == m) ans.push_back(start);
        }
        return ans;
        
    }
};