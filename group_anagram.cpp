class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string, vector<string>> mp;
        
        for(auto i: strs) {
            string s = i;
            sort(s.begin(),s.end());
            mp[s].push_back(i);
        }
        
        for(auto x: mp) {
            ans.push_back(x.second);    
        }
        
        return ans;
    }
};
