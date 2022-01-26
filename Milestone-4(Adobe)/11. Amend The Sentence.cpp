class Solution{
    public:
    string amendSentence (string s)
    {
        // your code here
        int n=s.size();
        string res="";
        string temp="";
        res+=tolower(s[0]);
        for(int i=1;i<n;i++){
            if(isupper(s[i])){
                res+=temp;
                res+=" ";
                res+=tolower(s[i]);
                temp="";
            }else{
                temp+=s[i];
            }
        }
        res+=temp;
        return res;
    }
};
