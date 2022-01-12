class Solution{
public:
    int isValid(vector<vector<int>> b){
        // code here
         int r=b.size();
        int c=b[0].size();
        unordered_set<string> s;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                
                if(b[i][j]==0)
                    continue;
                
                int ch=b[i][j];
                
                string row="row"+to_string(i)+to_string(ch);
                string col="col"+to_string(j)+to_string(ch);
                string box="box"+to_string(i/3)+to_string(j/3)+to_string(ch);
                
              //  string row="("+to_string(i)+")"+ch;
               // string col=ch+"("+to_string(j)+")";
                //string box="("+to_string(i/3)+ch+to_string(j/3)+")";
                
                if(s.find(row)!=s.end() || s.find(col)!=s.end() || s.find(box)!=s.end()){
                    return 0;
                }else{
                    s.insert(row);
                    s.insert(col);
                    s.insert(box);
                }
            }
        }
        return 1;
        
    }
};
