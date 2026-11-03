class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size(); 
        int minEle = *min_element(nums.begin(), nums.end());
        
        int step = 0;
        for(int i=0; i<n; i++){
            step += ( nums[i] - minEle);
        }
        return step;
        
    }
};