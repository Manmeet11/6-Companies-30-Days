class Solution{
    public:
    string colName (long long int n)
    {
        // your code here
        string res="";
        while(n){
            char c='A'+(n-1)%26;
            res=c+res;
            n=(n-1)/26;
        }
        return res;
    }
};
