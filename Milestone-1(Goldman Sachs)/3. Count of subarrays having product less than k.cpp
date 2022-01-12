class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int start=0;
        int end=0;
        long long int prod=1; 
        int count=0;
        while(end<n){
            prod*=a[end];
            while(start<n && prod>=k){
                prod=prod/a[start];
                start++;
            }
            if(prod<k)
                count+=(end-start)+1;
            end++;
        }
        return count;
        
    }
};
