class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n = fruits.size();

        int l=0;
        int ans = 0;

        unordered_map<int , int> mp;
         
      
         for(int i=0; i<n; i++){
             mp[fruits[i]]++;
             while(2 < mp.size()){
                mp[fruits[l]]--;
                if(mp[fruits[l]] == 0) mp.erase(fruits[l]);
                l++;

             }
             ans = max(ans, i-l+1);

         }
         return ans;
        

//         vector<pair<int, int>> v;

//         for(auto &it : mp){
//             v.push_back({it.first, it.second});
//         }
//         sort(v.begin(), v.end(), [](auto &a, auto &b) {
//     return a.second > b.second;
// });
//    return v[0].first + v[1].first;



        
    }
};