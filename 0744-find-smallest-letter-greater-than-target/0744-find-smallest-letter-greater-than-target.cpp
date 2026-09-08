class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int n = letters.size();
        char ch = letters[0];
        int low = 0;
        int high = n-1;
        while(low <= high){
            if(letters[low] > target) return letters[low];
            else low++;
        } 
        return ch;
        
    }
};