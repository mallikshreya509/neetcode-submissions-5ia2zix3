class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return true;
        if(nums[0]==0) return false;
         int mxreach=0;
         int temp=0;
        for(int i=0;i<n;i++){
             temp=i+nums[i];
             mxreach=max(mxreach,temp);
             if(i==mxreach) return false;
             if(mxreach>=n-1) return true;
        }
        return false;
    }
};
