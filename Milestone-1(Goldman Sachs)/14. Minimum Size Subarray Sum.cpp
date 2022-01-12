class Solution {
public:
    int minSubArrayLen(int x,vector<int>& nums) {
        int n=nums.size();
        int sum=0, minLen=INT_MAX;
        int start=0, end=0;
        while(end<n){
            while(sum<x && end<n){
                sum+=nums[end];
                end++;
            }
            while(sum>=x && start<n) {
                if(end-start<minLen)
                    minLen = end-start+1;
                sum-=nums[start];
                start++;
            }
        }
        if(minLen==INT_MAX)
            return 0;
        return minLen-1;
        
    }
};
