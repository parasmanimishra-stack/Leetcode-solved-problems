bool cmp(vector<int> a, vector<int> b){
    return a[0] < b[0];
}

class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& intervals) {
         
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), cmp);
        int Lastend = intervals[0][1];
           int ans = 0;
        for(int i=1; i<n; i++){
            if(Lastend >= intervals[i][0]){
                ans++;
                Lastend = min(Lastend, intervals[i][1]);

            }
            else{
                Lastend = intervals[i][1];

            }
        }
        return intervals.size() - ans;
        
    }
};