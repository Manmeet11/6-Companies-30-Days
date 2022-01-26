class Solution {
public:
    bool check(int mid, vector<int>& nums, int k){
        int sum=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>mid)
                return false;
            sum+=nums[i];
            if(sum>mid){
                count++;
                sum=nums[i];
            }
        }
        count++;
        if(count<=k)
            return true;
        return false;
    }
    int splitArray(vector<int>& nums, int k) {
        int start=0;
        int end=0;
        for(int i=0;i<nums.size();i++){
            start=max(start,nums[i]);
            end+=nums[i];
        }
        int ans=0;
        while(start<=end){
           int mid=(start+end)/2;
            if(check(mid,nums,k)){
                ans=mid;
                end=mid-1;
            }else
                start=mid+1;
        }
        return ans;
    }
};
