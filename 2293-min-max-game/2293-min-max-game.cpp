class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n = nums.size();

        
        while(n > 1){

            vector<int> store;
            
        for(int i=0; i<n/2; i++){
            
            if(i%2 == 0)
           store.push_back(min(nums[2 * i], nums[2 * i + 1]));
             else
           store.push_back(max(nums[2 * i], nums[2 * i + 1]));

        }
        nums = store;
        n = nums.size();
        }

          return nums[0];
        
    }
  
};