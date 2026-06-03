class Solution {
public:
vector<int>dp;
//dp[i] stand for max amount robbed till ith
  
  int recur(vector<int>&dp , vector<int>&nums,int ind){

    int n=nums.size();
    if(ind>=n) return 0;
    if(dp[ind]!=-1) return dp[ind];
    int notpick=recur(dp,nums,ind+1);
    int pick=recur(dp,nums,ind+2)+nums[ind];

    return dp[ind]= max(notpick,pick);
  }
    int rob(vector<int>& nums) {
        int n=nums.size();
        dp.resize(n,-1);
        return recur(dp,nums,0); 
    }
};
