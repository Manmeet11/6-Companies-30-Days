class Solution {
public:
    bool detectCycle(int u, vector<vector<int>>& adj, vector<int> &s, vector<int> &visited){
        visited[u]=1;
        for(int v: adj[u]){
            if(visited[v]==1)
                return true;
            if(visited[v]==0 && detectCycle(v, adj, s, visited))
                return true;
        }
        visited[u]=2;
        s.push_back(u);
        return false;
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& pre) {
        vector<vector<int>> adj(numCourses);
        for(auto courses: pre)
            adj[courses[1]].push_back(courses[0]);
        vector<int> s;
        vector<int> visited(numCourses, 0);
        for(int i=0;i<numCourses; i++){
            if(visited[i]==0 && detectCycle(i, adj, s, visited))
                return{};
        }
        reverse(s.begin(),s.end());
        return s;
        
    }
};
