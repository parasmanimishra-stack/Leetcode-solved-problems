class Solution {
public:
    int maxValidPairSum(vector<int>& nums, int k) {
        int n = nums.size();
        int mx = INT_MIN;
        int prefixsum = INT_MIN;
            for(int j = k; j<n; j++){
               prefixsum = max(prefixsum, nums[j-k]);
                mx = max(mx, prefixsum+nums[j]);
                
            }
            
            
        
        return mx;
    }
};