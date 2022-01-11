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
