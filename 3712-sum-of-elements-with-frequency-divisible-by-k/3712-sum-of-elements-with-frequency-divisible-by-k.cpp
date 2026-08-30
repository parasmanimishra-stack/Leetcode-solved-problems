class Solution {
public:
    int sumDivisibleByK(vector<int>& nums, int k) {
    int result = 0;
    unordered_map<int, int> mp;
    for(auto x : nums) mp[x]++;
    
    for(auto &it : mp){
        if(it.second != 0 && it.second % k == 0) result += it.first*it.second;
    }
        return result;
    }
};