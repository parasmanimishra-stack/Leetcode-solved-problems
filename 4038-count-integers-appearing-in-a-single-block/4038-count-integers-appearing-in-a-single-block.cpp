class Solution {
public:

    int countSpecialIntegers(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> blockCount;
        int i = 0;
        while (i < n) {
            int j = i;
            while (j < n && nums[j] == nums[i]) j++;
            blockCount[nums[i]]++;   
            i = j;
        }
        int special = 0;
        for (auto& p : blockCount)
            if (p.second == 1) special++;
        return special;
    }
};
