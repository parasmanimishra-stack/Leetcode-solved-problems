class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int dist = 0;
        int jump = 0;
        for(int i=0; i<n-1; i++){
            ans = max(ans, i+ nums[i]);
            if(i == dist){
                jump++;
            
             dist = ans;
        }
        }
        return jump;

        
    }
};