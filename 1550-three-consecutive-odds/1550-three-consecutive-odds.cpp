class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
      //  int n= nums.size();
        int count = 1;
        for(int x : arr){

            if(x%2 != 0){ count ++;
            if(count % 4 == 0) return true;
            }
            else count = 1;
        }
        return false;
        
    }
};