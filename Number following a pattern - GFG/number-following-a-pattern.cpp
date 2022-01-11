// { Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
class Solution{   
public:
    string printMinNumberForPattern(string s){
        // code here 
        string ans="";
        stack<int> st;
        int num=1;
        for(int i=0;i<s.size();i++){
            char c=s[i];
            if(c=='D'){
                st.push(num);
                num++;
            }else{
                st.push(num);
                num++;
                while(!st.empty()){
                    ans+=to_string(st.top());
                    st.pop();
                }
            }
        }
        st.push(num);
        while(!st.empty()){
            ans+=to_string(st.top());
            st.pop();
        }
        return ans;
    }
};


// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        cin >> S;
        Solution ob;
        cout << ob.printMinNumberForPattern(S) << endl;
    }
    return 0; 
} 
  // } Driver Code Ends