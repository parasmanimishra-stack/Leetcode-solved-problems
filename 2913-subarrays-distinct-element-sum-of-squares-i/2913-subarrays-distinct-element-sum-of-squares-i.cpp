class Solution {
public:

    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        bitset<101> st;
        long long sum = 0;
        for(int i=0; i<n; i++){
           st.reset();
           int count = 0;
            for(int j = i; j<n; j++){
                int x = nums[j];
                count += (st[x] == 0);
                st[x] = 1;
                sum += count * count;

            }
            

        }
        return sum;
        
    }
};