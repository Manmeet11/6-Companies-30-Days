class Solution{
    public:
    void dfs(int src, vector<vector<int>> &graph, vector<int> &vis, string &ans){
        vis[src]=1;
        for(auto it : graph[src]){
            if(!vis[it])
                dfs(it,graph,vis,ans);
        }
        char ch=src+'a';
        ans=ch+ans;
    }
    string findOrder(string dict[], int N, int K) {
        //code here
        vector<vector<int>> graph(K);
        for(int i=0;i<N-1;i++){
            string w1=dict[i];
            string w2=dict[i+1];
            for(int j=0;j<min(w1.length(),w2.length());j++){
                if(w1[j]!=w2[j]){
                    graph[w1[j]-'a'].push_back(w2[j]-'a');
                    break;
                }
            }
        }
        vector<int> vis(K,0);
        string ans="";
        for(int i=0;i<K;i++){
            if(vis[i]==0)
                dfs(i,graph,vis,ans);
        }
        return ans;
    }
};
