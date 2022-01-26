class Solution {
public:
    void dfs(vector<vector<int>>& heights, int row, int col, int prev, vector<vector<int>>& ocean){
        if(row<0 || col<0 || row>heights.size() || col>heights[0].size())
            return;
        if(heights[row][col]<prev) 
            return;
        if(ocean[row][col]==-1)
            return;
        ocean[row][col]=-1;
        dfs(heights, row-1, col, heights[row][col], ocean);
        dfs(heights, row+1, col, heights[row][col], ocean);
        dfs(heights, row, col-1, heights[row][col], ocean);
        dfs(heights, row, col+1, heights[row][col], ocean);
        }
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int r=heights.size();
        int c=heights[0].size();
        vector<vector<int>> pacific(r, vector<int>(c,0));
        vector<vector<int>> atlantic(r, vector<int>(c,0));
        vector<vector<int>> ans;
        for(int col=0;col<c;col++){
            dfs(heights, 0, col, INT_MIN, pacific);
            dfs(heights, r-1, col, INT_MIN, atlantic);
        }
        for(int row=0;row<r;row++){
            dfs(heights, row, 0, INT_MIN, pacific);
            dfs(heights, row, c-1, INT_MIN, atlantic);
        }
        vector<int> v;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(pacific[i][j]==-1 && pacific[i][j]==atlantic[i][j]){
                    v.clear();
                    v.push_back(i);
                    v.push_back(j);
                    ans.push_back(v);
                }
            }
        }
        return ans;
        
    }
};
