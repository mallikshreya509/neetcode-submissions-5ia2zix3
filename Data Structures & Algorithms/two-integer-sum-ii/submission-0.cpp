class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       vector<int>ans;
       map<int,int>mp;
       int n=numbers.size();
       for(int i=0;i<n;i++){
        int t=target-numbers[i];
            if(mp.find(t)!=mp.end()){
              ans.push_back(mp[t]+1);
              ans.push_back(i+1);
              return ans;
            }
            else
            mp[numbers[i]]=i;
       } 
    }
};
