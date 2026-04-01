class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size();
        vector<int>ans(n,0);

        for(int i=0;i<n;i++){
            int cnt=1;
            int tem=temp[i];
            for(int j=i+1;j<n;j++){
                if(tem<temp[j]){
                   ans[i]=cnt;break;
                }
                else cnt++;
            }
        }
        return ans;
    }
};
