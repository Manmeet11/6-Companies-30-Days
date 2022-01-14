class Solution{
    public:
    // arr[] : int input array of integers
    // k : the quadruple sum required
    vector<vector<int> > fourSum(vector<int> &arr, int k) {
        // Your code goes here
        vector<vector<int>> ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        unordered_map<int, vector<pair<int,int>>> mp;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                mp[arr[i]+arr[j]].push_back(make_pair(i,j));
            }
        }
        int sum=0;
        for(int i=0;i<n-1;i++){
            if(i>0 && arr[i]==arr[i-1])
                continue;
            for(int j=i+1;j<n;j++){
                if(j>i+1 && arr[j]==arr[j-1])
                    continue;
                sum=k-arr[i]-arr[j];
                if(mp.find(sum)!=mp.end()){
                    for(auto it : mp[sum]){
                        int k=it.first;
                        int l=it.second;
                        if(k>j){
                            if(!ans.empty() && ans.back()[0]==arr[i] && ans.back()[1]==arr[j] && ans.back()[2]==arr[k] && ans.back()[3]==arr[l])
                                continue;
                            vector<int> temp={arr[i],arr[j],arr[k],arr[l]};
                            ans.push_back(temp);
                        }
                    }
                }
            }
        }
        return ans;
    }
};
