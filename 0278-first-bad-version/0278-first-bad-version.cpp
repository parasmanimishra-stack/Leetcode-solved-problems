// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
      
        while(low <= high){
            int i = low + (high-low)/2;
            if(isBadVersion(i)){
                high = i-1;
            }
            else{
                low = i+1;
            }
    
        }
        return low;

    }
};