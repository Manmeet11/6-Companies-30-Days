class Solution{
  public:
  
    //Function to return the name of candidate that received maximum votes.
    vector<string> winner(string arr[],int n)
    {
        unordered_map<string,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int maxAns=mp[arr[0]];
        string name=arr[0];
        for(int i=1;i<n;i++){
            int curr = mp[arr[i]];
            string currName=arr[i];
            if(curr > maxAns){
                maxAns = curr;
                name=currName;
            }else if(maxAns == curr && name>currName){
                name=currName;
            }
        }
        vector<string> res;
        string temp=to_string(maxAns);
        res.push_back(name);
        res.push_back(temp);
        return res;
    }
};
