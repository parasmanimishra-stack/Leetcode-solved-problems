class Solution {
public:
    vector<int> partitionLabels(string s) {
        int n = s.size();
        int start = 0;
        int end = 0;
        int Last_occur[26] = {0};

        vector<int> partitions;

        for(int i=0; i<n; i++){
            char curr = s[i]-'a';
            Last_occur[curr] = i;
        }
        for(int i=0; i<n; i++){
            char curr = s[i] - 'a';
            int Last_idx = Last_occur[curr];
            end = max(end, Last_idx);
            if(i==end){
                partitions.push_back(end - start + 1);
                start = i+1;
                
            }
            

        }
        return partitions;
    }
};