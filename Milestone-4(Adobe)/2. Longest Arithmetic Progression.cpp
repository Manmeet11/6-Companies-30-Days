class Solution{   
public:
    int lengthOfLongestAP(int A[], int n) {
        // code here
        if(n<=2)
            return n;
        int dp[n][n];
        int mxLen=2;
        for(int i=0;i<n;i++)
            dp[i][n-1]=2;
        for(int j=n-2;j>=1;j--){
            int i=j-1;
            int k=j+1;
            while(i>=0 && k<=n-1){
                if(A[i]+A[k]<2*A[j])
                    k++;
                else if(A[i]+A[k]>2*A[j]){
                    dp[i][j]=2;
                    i--;
                }
                else{
                    dp[i][j]=dp[j][k]+1;
                    mxLen=max(mxLen,dp[i][j]);
                    i--;
                    k++;
                }
            }
            while(i>=0){
                dp[i][j]=2;
                i--;
            }
        }
        return mxLen;
    }
};
