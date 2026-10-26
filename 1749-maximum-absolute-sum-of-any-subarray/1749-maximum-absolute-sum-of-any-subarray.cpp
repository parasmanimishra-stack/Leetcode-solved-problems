class Solution {
public:
 //typedef long long ll;
    int maxAbsoluteSum(vector<int>& nums) {
        int n = nums.size();
        int   currsum = nums[0];
        int  best = nums[0];
        int  currsum1 = nums[0];
        int  worst = nums[0];
        for(int i=1; i<n; i++){
            currsum = max(nums[i], currsum+nums[i]);
            best = max(best, currsum);
            currsum1 = min(nums[i], currsum1 + nums[i]);
            worst = min(worst, currsum1);
        }
        if(abs(best) >= abs(worst)){
            return abs(best);
        }
        return abs(worst);
       

        
    }
};