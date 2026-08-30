class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n == 1) return n;
        int minIdx = 0;
        int maxIdx = 0;
        for(int i=1; i<n; i++){
           if(nums[maxIdx] < nums[i]) maxIdx = i;
        
        
        if(nums[minIdx] > nums[i]) minIdx = i;
        
        }
       int r = max( minIdx,  maxIdx);
       int l = min( minIdx,  maxIdx);

       int res = r+1;
       res = min(res, n-l);
       res = min(res, (l+1) + (n-r));
       return res;



        
    }
};