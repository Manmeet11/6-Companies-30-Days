vector<string> generate(int N)
{
	// Your code here
	vector<string> ans;
	string p="";
	for(int i=1;i<=N;i++){
	      p="";
	    int temp=i;
	    while(temp>0){
	        int res=temp%2;
	        p=to_string(res)+p;
	        temp=temp/2;
	    }
	    ans.push_back(p);
	}
	return ans;
}
