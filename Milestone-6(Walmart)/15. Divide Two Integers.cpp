class Solution {
public:
    int divide(int dividend, int divisor) {
        bool isNeg=false;
        if(dividend == 0) return 0;
        if(divisor == 1) return dividend;
        if(divisor == -1) return dividend == INT_MIN ? INT_MAX : 0 - dividend;
        if((dividend>0 && divisor<0) || (dividend<0 && divisor>0))
            isNeg=true;
        int x=abs(dividend);
        int y=abs(divisor);
        int ans=0;
        int temp, quot;
        while(x>=y){
            temp=y;
            quot=1;
            while(temp<=x){
                temp=temp<<1;
                quot=quot<<1;
                ans+=quot>>1;
                x-=temp>>1;
            }
        }
        if(isNeg==true)
            return ~ans +1;
        else if(ans>INT_MAX)
            return INT_MAX;
        else if(ans<INT_MIN)
            return INT_MIN;
        return ans;
    }
};
