class Solution{
public:
    string decodedString(string s){
        // code here
        stack<string>letter; stack<int>freq;
        string str=""; int ctr=0;
        for(int i=0;i<s.size();i++){
            if(s[i]>='0' && s[i]<='9') {
                ctr*=10; ctr+=(s[i] -'0');
            }
            else if(s[i]=='[') {
                letter.push(str); 
                str=""; 
                freq.push(ctr); 
                ctr=0;
            }
            else if(s[i]==']') {
                int ctr=freq.top();
                freq.pop();
                string temp= "";
                for(int j=0;j<ctr;j++)
                    temp+=str;
                str=letter.top() + temp;
                letter.pop();
            }
            else str+=s[i];
        }
        string temp="";
        while(!letter.empty()) {
            temp= letter.top() + temp;
            letter.pop();
        }
        str=temp+str;
        return str;
    }
};
