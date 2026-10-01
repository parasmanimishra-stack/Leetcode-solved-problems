class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        int n = nums.size();
        unordered_map<int, int> mp;
        for(int i=0; i<n; i++){
            auto it = mp.find( target - nums[i]);
            if(it != mp.end()){
                return {it->second+1, i+1};
            }
            mp[nums[i]] = i;
        }
        return {};
    }
};