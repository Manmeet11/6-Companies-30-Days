class Solution{
    public:
    class element{
        public:
            int val;
            int col;
            int row;
            int arrSize;
            element(int val, int colNum, int rowNum, int arrSize){
                val=val;
                col=colNum;
                row=rowNum;
                arrSize=arrSize;
            }
    };
    struct compare{
        bool operator()(element a, element b){
            return a.val>b.val;
        }
    };
    pair<int,int> findSmallestRange(int arr[][N], int n, int k)
    {
          //code here
          int mn=INT_MAX, mx=INT_MIN, range=INT_MAX;
          priority_queue<element, vector<element>, compare> q;
          int low, high;
          for(int i=0;i<k;i++){
              q.push(element(arr[i][0],0,i,N));
              mn=min(mn,arr[i][0]);
              mx=max(mx,arr[i][0]);
          }
          while(!q.empty()){
              element temp=q.top();
              q.pop();
              int mayB=temp.val;
              if(range > mx-mayB){
                  mn=mayB;
                  range=mx-mn;
                  low=mn;
                  high=mx;
              }
            //  if(temp.col==N-1)
              //  break;
              temp.col+=1;
              q.push(element(arr[temp.row][temp.col],temp.col,temp.row,N));
              mx=max(mx,arr[temp.row][temp.col]);
              
          }
          pair<int,int> p{low,high};
          return p;
    }
};
