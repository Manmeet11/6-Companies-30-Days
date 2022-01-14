void rotate(vector<vector<int> >& a)
{
    int n=a.size();
    for(int row=0;row<n;row++){
        for(int col=row;col<n;col++){
            swap(a[row][col] , a[col][row]);
        }
    }
  
    for(int col=0;col<n;col++){
        int s=0;
        int e=n-1;
        while(s<=e){
            swap(a[s][col] , a[e][col]);
            s++;
            e--;
        }
    }
}
