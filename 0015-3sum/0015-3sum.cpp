class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        set<vector<int>> s;
        for(int i=0; i<n-2; i++){
            int start = i+1;
            int end = n-1;
            while(start < end){
                if(nums[start]+ nums[end]+ nums[i] < 0){
                    start ++;
                }
                else if(nums[start] + nums[end] + nums[i] > 0 ){
                    end--;
                }
                else {
                    s.insert({nums[i] , nums[start] , nums[end]});
                    start++;
                    end--;
                }
            }
            
            
        }
        for(auto x : s){
             res.push_back(x);
        }
        return res;
    }
};