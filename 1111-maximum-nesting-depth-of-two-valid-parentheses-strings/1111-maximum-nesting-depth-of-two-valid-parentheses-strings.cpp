class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n = seq.size();
        vector<int> ans(n);
        int len = 0;
        for(int i=0; i<n; i++){
            char ch = seq[i];
            if(ch == '('){
                len++;
                ans[i] = len%2;
            }
            else if(ch == ')'){
                ans[i] = len%2;
                len--;
            }
        }
        return ans;
        
    }
};