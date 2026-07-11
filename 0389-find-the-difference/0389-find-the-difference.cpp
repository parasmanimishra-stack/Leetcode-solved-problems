class Solution {
public:
    char findTheDifference(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        int n = s.size();
        int m = t.size();
        // if( m == 0) return s;
        // if( n == 0) return t;
        int i=0;
        while(i<m){
         if(s[i] != t[i]) return t[i];
         i++;
        }
        return t[n];

        
    }
};