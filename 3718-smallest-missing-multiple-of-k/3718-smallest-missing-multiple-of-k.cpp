class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_set<int> st;
        for(auto num : nums) st.insert(num);
        for(int i=1; i <=n; i++){
            if(st.find(k*i) == st.end()) return k*i;
        }
        return (n+1)*k;

        
    }
};