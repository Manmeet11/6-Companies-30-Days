class Solution
{
    public:
    //Function to find total number of unique paths.
    int NumberOfPath(int a, int b)
    {
        //code here
        //vector<vector<int>> paths(m, vector<int>(n));
        vector<vector<int>> dp(a, vector<int>(b));
        for(int i=0;i<b;i++)
            dp[a-1][i]=1;
        for(int i=0;i<a;i++)
            dp[i][b-1]=1;
        for(int i=a-2;i>=0;i--){
            for(int j=b-2;j>=0;j--)
                dp[i][j]=dp[i+1][j]+dp[i][j+1];
        }
        return dp[0][0];
    }
};
