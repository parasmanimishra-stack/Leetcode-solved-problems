class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
           int n=nums.size();
        // sort(nums.begin(),nums.end());
       
        // for(int i=1;i<n;i++){
        //     if(nums[i]==nums[i-1])
        //     return true;
        //     }
        // return false;
//         set<int> st;
// for(auto x : nums){
//     st.insert(x);
// }
// return n != st.size();
unordered_map<int, int> mp;
for(auto x : nums){
    mp[x]++;
}
for(auto x : nums){
   if( mp[x] >= 2) return true;
        
    }
    return false;
    }
};
