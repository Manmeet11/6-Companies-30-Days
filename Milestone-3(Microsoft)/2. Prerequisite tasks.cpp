class Solution {
public:
	bool isPossible(int N, vector<pair<int, int> >& pre) {
	    // Code here
	    unordered_map<int,vector<int>> graph;
	     vector<int> indegree(N,0);
	    for(int i=0;i<pre.size();i++){
	        int ai=pre[i].first;
	        int bi=pre[i].second;
	        graph[bi].push_back(ai);
	        indegree[ai]++;
	    }
	    queue<int> q;
	    for(int i=0;i<indegree.size();i++){
	        if(indegree[i]==0)
	            q.push(i);
	    }
	    int finish=0;
	    while(q.size()>0){
	        int node=q.front();
	        q.pop();
	        finish++;
	        vector<int> children=graph[node];
	        for(int i=0;i<children.size();i++){
	            indegree[children[i]]--;
	            if(indegree[children[i]]==0)
	                q.push(children[i]);
	        }
	    }
	    if(finish==N)
	        return true;
	   return false;
	}
};
