class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
       map<string,vector<string>>mp;
        
        for(auto s:strs){
            string newstr=s;
            sort(newstr.begin(),newstr.end());
            mp[newstr].push_back(s);
        }
       vector<vector<string>>ans;
       for(auto &pair:mp){
        ans.push_back(pair.second);
       }
  return ans;
    }
};
