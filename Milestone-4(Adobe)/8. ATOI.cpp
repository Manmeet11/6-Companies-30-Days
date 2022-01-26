class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string s) {
        //Your code here
        long long int out=0;
        int i=0;
        int count=0;
        int sign=0;
        if(s[i]=='-'){
            sign=1;
            i++;
            count++;
    }
         while(s[i]>='0' && s[i]<='9'){
            out=out*10;
           // if(out<=INT_MIN || out>=INT_MAX)
            //    break;
            out=out+(s[i]-'0');
            count++;
            i++;
        }
        if(sign==1)
            out=out*-1;
        if(count!=s.size())
            return -1;
        return out;
    }
};
