string encode(string src)
{     
  //Your code here 
  int n=src.size();
  string ans="";
  int count=1;
  for(int i=0;i<n-1;i++){
      if(src[i]==src[i+1]){
          count++;
      }
      else{
          ans+=src[i]+to_string(count);
          count=1;
      }
  }
  ans+=src[n-1]+to_string(count);
  return ans;
}     
