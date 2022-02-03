class Solution{
  public:
    vector<int> find3Numbers(vector<int> arr, int N) {
        // Your code here
        vector<int> ans;
        if(N<3)
            return ans;
        int *left = new int(N);
        int *right=new int(N);
        left[0]=arr[0];
        right[N-1]=arr[N-1];
        for(int i=1;i<N;i++)
            left[i]=min(arr[i], left[i-1]);
        for(int i=N-2;i>=0;i--)
            right[i]=max(right[i+1], arr[i]);
        for(int i=0;i<N;i++){
            if(left[i]<arr[i] && arr[i]<right[i]){
                ans.push_back(left[i]);
                ans.push_back(arr[i]);
                ans.push_back(right[i]);
            }
        }
        return ans;
    }
};
