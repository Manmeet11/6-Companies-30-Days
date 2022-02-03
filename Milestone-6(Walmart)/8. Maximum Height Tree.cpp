class Solution{
public:
    int height(int N){
        // code here
        int i=0, x=0;
       // int count=0;
        while(x<=N){
            x+=i+1;
            i++;
        }
        return i-1;
    }
};
