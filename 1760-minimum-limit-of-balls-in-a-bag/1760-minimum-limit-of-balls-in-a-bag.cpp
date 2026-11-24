class Solution {
public:
    int minimumSize(vector<int>& nums, int maxOperations) {
        int lo = 1; 
        int hi = *max_element(nums.begin(), nums.end());

        while(lo < hi){
            int opr = 0;

            int mid = lo + (hi - lo)/2;

            for(auto num : nums){
               opr += (num - 1)/ mid;


               

            }
            if(opr <= maxOperations) hi = mid;

            else lo = mid + 1;
        }
        return lo;
        
    }
};