class Solution{
    public:
    long long int fun(int n, int x, int c){
        if(pow(c,x)<n)
            return fun(n,x,c+1)+fun(n-pow(c,x),x,c+1);
        else if(pow(c,x)==n)
            return 1;
        else
            return 0;
    }
    long long int numOfWays(int n, int x)
    {
        // code here
        int dp[n+1];
        int c=1;
        return fun(n,x,1);
    }
};
