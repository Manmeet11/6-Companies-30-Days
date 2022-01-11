class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string> > mymap;
        string temp;
        int n=strs.size();
        for(int i=0;i<n;i++){
            temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            mymap[strs[i]].push_back(temp);
        }
        vector<vector<string>> ans;
        for(auto i=mymap.begin();i!=mymap.end();i++){
            ans.push_back(i->second);
        }
        return ans;
        
    }
};