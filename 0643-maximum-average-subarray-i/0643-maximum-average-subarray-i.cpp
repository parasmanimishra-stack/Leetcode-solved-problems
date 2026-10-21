class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
         int start = 0;
        double windowSum = 0;
        double avg = INT_MIN;
        int ans[nums.size() - k + 1];

        for(int end = 0; end < nums.size(); end++) {
            windowSum += nums[end];
            if(end - start + 1 == k) {
                ans[start] = windowSum;
                    avg = max(avg, windowSum/k);
                windowSum -= nums[start];
                start += 1;
            }
        }

        return avg;
        
    }
};