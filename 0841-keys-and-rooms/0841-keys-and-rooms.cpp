class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        unordered_set<int > visited;
        queue<int> qu;
        qu.push(0);
        visited.insert(0);
        while(!qu.empty()){
            int curr = qu.front();
            qu.pop();
            
                for(auto x : rooms[curr]){
                    if(visited.count(x) == 0){
                    qu.push(x);
                visited.insert(x);
            }
            }
        }
         if (visited.size() == rooms.size()) return true;
         return false;
        
    }
};