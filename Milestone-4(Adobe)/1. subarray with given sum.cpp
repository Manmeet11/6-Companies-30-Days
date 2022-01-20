class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(int arr[], int n, long long s)
    {
        // Your code here
        long long int sum=0;
        vector<int> ans;
        long long int start=0;
        for(int i=0;i<n;i++){
            sum+=arr[i];
            while(sum>s){
                sum=sum-arr[start];
                start++;
            }
            if(sum==s){
                ans.push_back(start+1);
                ans.push_back(i+1);
                return ans;
            }
        }
        ans.push_back(-1);
        return ans;
    }
};
