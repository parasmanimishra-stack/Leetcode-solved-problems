class Solution {
public:
    int calPoints(vector<string>& ope) {
        int n=ope.size();
        vector<int> result;
        for(int i=0; i<n; i++){
            if(ope[i] =="+"){
                int sum = result[result.size()-1]+result[result.size()-2];
                result.push_back(sum);

            }
            else if(ope[i] == "C") result.pop_back();
            else if(ope[i] == "D")result.push_back(result[result.size()-1]*2);
            else result.push_back(stoi(ope[i]));
        }
        int m = result.size();
        long long total = 0;
        for(int x : result){
             total += x;
        }
        return total;
        
    }
};