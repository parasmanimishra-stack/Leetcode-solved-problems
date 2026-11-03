class Solution {
public:
    int minMoves2(vector<int>& nums) {
        
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int med = nums[n/2];
       
       
        int step = 0;
        for(int i=0; i<nums.size(); i++){
            step += abs(med - nums[i]);
        }        
        return step;
    }
};