class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        //code here
        unordered_map<string, vector<string> > mp;
        string temp;
        int size = string_list.size();
        for(int i=0;i<size;i++){
            temp=string_list[i];
            sort(string_list[i].begin(),string_list[i].end());
            mp[string_list[i]].push_back(temp);
        }
        vector<vector<string> > ans;
        for(auto it : mp){
            ans.push_back(it.second);
        }
        return ans;
    }
};
