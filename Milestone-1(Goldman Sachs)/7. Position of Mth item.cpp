class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        int ans = (K+M-1)%N;
        if(ans==0)
            return N;
        return ans;
    }
};
