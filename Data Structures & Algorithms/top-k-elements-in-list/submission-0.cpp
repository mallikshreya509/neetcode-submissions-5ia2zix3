class Solution {
public:
static bool cmp(pair<int,int>a,pair<int,int>b){
    return a.second>b.second;
}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        map<int,int>mp;
        for(int i=0;i<n;i++){
           mp[nums[i]]++;
        } 
     vector<pair<int,int>>mp1(mp.begin(),mp.end());       
     sort(mp1.begin(),mp1.end(),cmp);

    for(int i=0;i<k;i++){
        ans.push_back(mp1[i].first);
    }
     return ans;
    }
};
