class Solution
{
    public:
    //Function to find list of all words possible by pressing given numbers.
    void myLetter(int N, int a[], vector<string> &res, string nums[], int i, string s){
        if(i == N){
            res.push_back(s);
            return;
        }
        int dig=a[i];
        string val = nums[dig];
        for(int j=0;j<val.length();j++){
            myLetter(N, a, res, nums, i+1, s+val[j]);
        }
    }
    vector<string> possibleWords(int a[], int N)
    {
        //Your code here
        vector<string> res;
        string nums[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        myLetter(N,a,res,nums,0,"");
        return res;
    }
};
