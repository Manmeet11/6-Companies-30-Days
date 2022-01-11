// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string encode(string src);    
 
int main() {
	
	int T;
	cin>>T;
	while(T--)
	{
		string str;
		cin>>str;
		
		cout<<encode(str)<<endl;
	}
	return 0;
}// } Driver Code Ends


/*You are required to complete this function */

string encode(string src)
{     
  //Your code here 
  /*unordered_map<char,int> mp;
  int n=src.size();
  for(int i=0;i<n;i++){
    mp[src[i]]++;
  }
  string ans="";
  for(int i=1;i<n;i++){
      if(i!=1 && src[i]==src[i-1])
        continue;
      ans = ans+src[i]+to_string(mp[src[i]]);
  }
  return ans;*/
  int n=src.size();
  string ans="";
  int count=1;
  for(int i=0;i<n-1;i++){
      if(src[i]==src[i+1]){
          count++;
      }
      else{
          ans+=src[i]+to_string(count);
          count=1;
      }
  }
  ans+=src[n-1]+to_string(count);
  return ans;
}     
 
