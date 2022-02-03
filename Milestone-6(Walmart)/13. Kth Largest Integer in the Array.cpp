class helper {
public:
    bool operator()(string &s1, string &s2)
    {
        if(s1.size() != s2.size())
            return s1.size() < s2.size();

        return s1 < s2;
    }
};

class Solution {
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        priority_queue <string, vector<string>, helper > pq;
        for(int i=0;i<nums.size();i++){
            pq.push(nums[i]);
        }
        int x=nums.size()-k+1;
        while(x!=0){
            pq.pop();
            x--;}
        string ans=pq.top();
        return ans;
        
    }
};
