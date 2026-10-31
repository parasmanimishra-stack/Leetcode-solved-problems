class Solution {
public:
    vector<int> findOrder(int v, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(v);
        // for direct edges
        for(auto &p : prerequisites){
            int a = p[0];
            int b = p[1];
            graph[b].push_back(a);
        }

        // indegree 
        vector<int> indegree(v,0);
        for(int i=0; i<v; i++){
            for(auto neighbour : graph[i]){
               indegree[neighbour]++;
            }
        }

        // for queue
        queue < int > qu;
        for(int i=0; i<v; i++){
            if(indegree[i] == 0) qu.push(i);
        }
        // kahn's algo
        vector <int> ans;
        while(! qu.empty()){
            int node = qu.front();
            qu.pop();
            ans.push_back(node);
            for(auto neighbour : graph[node]){
                indegree[neighbour]--;
                if(indegree[neighbour] == 0 ) qu.push(neighbour);
            }
        }
        if(ans.size() == v)
        return ans;
        return {};
    }
};