class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    vector<int> vis(26,0);
		    string ans="";
		    vector<char> v;
		    int n=A.length();
		    for(int i=0;i<n;i++){
		        if(!vis[A[i]-'a'])
		            v.push_back(A[i]);
		        vis[A[i]-'a']++;
		        int freq=0;
		        int m=v.size();
		        for(int j=0;j<m;j++){
		            if(vis[v[j]-'a']==1){
		                ans.push_back(v[j]);
		                freq=1;
		                break;
		            }
		        }
		        if(freq==0)
		            ans.push_back('#');
		    }
		    return ans;
		}

};
