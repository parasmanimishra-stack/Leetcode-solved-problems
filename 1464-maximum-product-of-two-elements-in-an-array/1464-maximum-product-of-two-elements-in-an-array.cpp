class Solution {
public:
    int maxProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int j=n-1;
        return (nums[j]-1)*(nums[j-1]-1);
        
    }
};