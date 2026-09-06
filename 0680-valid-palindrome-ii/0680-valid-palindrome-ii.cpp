class Solution {
public:

   bool Ispalindrome(string &s, int start, int end){
            while(start < end){
                if(s[start] != s[end]) return false;
                start++;
                end--;
            }
            return true;
        }

    bool validPalindrome(string s) {

     
       
        int n = s.size();
         if(n == 1 || n == 2) return true;

         int mid = n/2;
         int i=0; 
         int j=n-1;
         int error=0;
           
          while(i<j){
            if(s[i] != s[j]) {
                return Ispalindrome(s, i+1, j) || Ispalindrome(s, i, j-1);
            }
        
            i++;
            j--;
          }
          return true;
         


        
    }
};