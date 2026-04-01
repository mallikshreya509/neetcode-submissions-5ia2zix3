class Solution {
public:
    int maxProfit(vector<int>& p) {
int ans=0;
int n=p.size();
int l=p[0];
for(int i=1;i<n;i++){
    if(l>p[i]){
        l=p[i];
        //ans=max(ans,p[i]-l);
    }
    else
    ans=max(ans,p[i]-l);
}
return ans;
    }
};
