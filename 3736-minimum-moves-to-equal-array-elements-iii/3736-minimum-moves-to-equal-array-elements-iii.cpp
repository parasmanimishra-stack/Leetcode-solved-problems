class Solution {
public:
    int minMoves(vector<int>& nums) {
        int large_ele = *max_element(nums.begin(), nums.end());
        
        int TotalMoves = 0;

        for(int i = 0; i< nums.size(); i++){
             TotalMoves += (large_ele - nums[i]);


        }
        return TotalMoves;
        
    }
};