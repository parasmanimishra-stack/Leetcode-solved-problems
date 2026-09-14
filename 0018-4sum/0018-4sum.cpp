class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int> > ans;

        set<vector<int> > set;

        for(int i=0; i<n-3; i++){
            for(int j=i+1; j<n-2; j++){
                long long NewT =(long long) target - (long long)nums[i] - (long long)nums[j];

                int low = j+1;
                int high = n-1;
                while(low < high){
                    if(NewT > nums[low] + nums[high]){ 
                        low++;
                       
                    }
                      else if(NewT < nums[low] + nums[high]){
                        high--;
                     }
                     else{
                         set.insert({nums[i],nums[j],nums[low], nums[high]});
                    
                    low ++;
                    high--;
                     }
                }
            }
        }
        for(auto it : set){
            ans.push_back(it);
        }
        return ans;
    }
};