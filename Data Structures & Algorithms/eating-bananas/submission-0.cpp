class Solution {
public:
bool ispossible(int mid,vector<int>&piles,int h){
    int n=piles.size();
    int temp=0;
    for(int i=0;i<n;i++){
       temp+=(piles[i]/mid);
       if(piles[i]%mid) temp++;
    }
    return temp<=h;
}
    int minEatingSpeed(vector<int>& piles, int h) {

        int n=piles.size();
         int ans=0;
         int l=1;
         int r=INT_MIN;
         for(int i=0;i<n;i++){
            if(piles[i]>r) r=piles[i];
         }
         while(l<=r){
           int mid=l+(r-l)/2;
            if(ispossible(mid,piles,h)){
                ans=mid;
                r=mid-1;
            }
            else l=mid+1;
         }
         return ans;
    }
};
