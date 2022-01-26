class Solution {
public:
    int fun(int mid, vector<int> &piles){
        int hours=0;
        for(int i=0;i<piles.size();i++){
            hours+=(piles[i]+mid-1)/mid;
        }
        return hours;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int l=1;
        int r=*max_element(piles.begin(),piles.end());
        int ans=r;
        int mid=0;
        while(l<=r){
            mid=(l+r)/2;
            if(fun(mid,piles)<=h){
                ans=min(mid,ans);
                r=mid-1;
            }else
                l=mid+1;
        }
        return ans;
        
    }
};
