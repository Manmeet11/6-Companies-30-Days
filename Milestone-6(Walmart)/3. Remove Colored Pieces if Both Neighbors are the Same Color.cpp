class Solution {
public:
    bool winnerOfGame(string colors) {
        int n=colors.size();
        int cnt=0, cntA=0, cntB=0;
        for(int i=0;i<n;i++){
            if(colors[i]=='A')
                cnt++;
            else{
                if(cnt>=3)
                    cntA+=cnt-2;
                cnt=0;
            }
        }
        if(cnt>=3)
            cntA+=(cnt-2);
        cnt=0;
        for(int i=0;i<n;i++){
            if(colors[i]=='B')
                cnt++;
            else{
                if(cnt>=3)
                    cntB+=(cnt-2);
                cnt=0;
            }
        }
        if(cnt>=3)
            cntB+=(cnt-2);
        if(cntA>cntB)
            return true;
        return false;
    }
};
