class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        priority_queue<int>pq;
        map<char,int>mp;
        for(char ch:tasks){
            mp[ch]++;
        }
        for(auto i:mp){
            pq.push(i.second);
        }
        int ans=0;
        queue<pair<int,int>>q;
        while(!pq.empty()|| !q.empty()){
          ans++;
          if(pq.empty()){
            ans=q.front().second;
          }
          else{
            int cnt=pq.top()-1;
            pq.pop();
            if(cnt>0) q.push({cnt,ans+n});
          }
           if(!q.empty() && q.front().second==ans){
            pq.push(q.front().first);
            q.pop();
           }
          
        }
        return ans;
    }
};
