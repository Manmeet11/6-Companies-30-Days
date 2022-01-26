class Solution {
  public:
    int list(vector<int> v){
        vector<int> res;
        if(v.size()>0)
            res.push_back(v[0]);
        for(int i=1;i<v.size();i++){
            if(v[i]>res.back())
                res.push_back(v[i]);
            else{
                int id=lower_bound(res.begin(),res.end(),v[i])-res.begin();
                res[id]=v[i];
            }
        }
        return res.size();
    }
    int minInsAndDel(int a[], int b[], int N, int M) {
        // code here
        vector<int> dp;
        for(int i=0;i<N;i++){
            if(binary_search(b,b+M,a[i]))
                dp.push_back(a[i]);
        }
        return (N+M-(2*list(dp)));
    }
};
