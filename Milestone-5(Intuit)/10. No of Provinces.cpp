class Solution {
public:
    int find(vector<int> &dsuf, int val){
        if(dsuf[val]==-1)
            return val;
        return dsuf[val]=find(dsuf, dsuf[val]);
    }
    void unionSet(vector<int> &dsuf, int x, int y){
        int parentX=find(dsuf, x);
        int parentY=find(dsuf, y);
        if(parentX==parentY)
            return;
        if(parentX>parentY)
            dsuf[parentY]=parentX;
        else
            dsuf[parentX]=parentY;
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        vector<int> dsuf(isConnected.size(),-1);
        for(int i=0;i<isConnected.size()-1;i++){
            for(int j=0;j<isConnected.size()-1;j++){
                if(i!=j && isConnected[i][j]==1)
                    unionSet(dsuf,i,j);
            }
        }
        int cnt=0;
        for(int i=0;i<dsuf.size();i++){
            if(dsuf[i]==-1)
                cnt++;
        }
        return cnt;
    }
};
