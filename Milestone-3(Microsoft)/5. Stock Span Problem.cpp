class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       stack<pair<int,int>> st;
       vector<int> ans;
       int add=0;
       for(int i=0;i<n;i++){
           add=1;
           while(!st.empty() && st.top().first<=price[i]){
               add+=st.top().second;
               st.pop();
           }
           st.push({price[i],add});
           ans.push_back(add);
       }
       return ans;
    }
};
