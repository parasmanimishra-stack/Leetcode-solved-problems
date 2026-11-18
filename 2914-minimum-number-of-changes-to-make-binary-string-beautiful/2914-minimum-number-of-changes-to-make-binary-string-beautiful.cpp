class Solution {
public:
    int minChanges(string s) {
        int change  =  0; 
        int n = s.size();
        int i=0;
        while(i < n){
        if(s[i] != s[i+1]) change++;
        i += 2;

        }

        return change;

   
        
     }
};