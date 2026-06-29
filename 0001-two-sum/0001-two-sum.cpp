class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        for(int i = 0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
               
                if(nums[i]+nums[j]==target){ // time complexicity O(n2)
                return{i,j};
                 // break;
                }
                


            }
        }
        return{};

        // unordered_map<int, int> num_map;
        // int n = nums.size();

        // for (int i = 0; i < n; i++) {
        //     int complement = target - nums[i];
        //     if (num_map.count(complement)) {
        //         return {num_map[complement], i};
        //     }
        //     num_map[nums[i]] = i;
        // }

        // return {}; // Not reachable
        
    }
};