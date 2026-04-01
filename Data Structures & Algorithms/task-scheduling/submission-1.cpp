class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        priority_queue<int> pq;
        map<char,int> mp;

        for(char ch : tasks){
            mp[ch]++;
        }

        for(auto i : mp){
            pq.push(i.second);
        }

        int cnt = 0;
        queue<pair<int,int>> q;

        while(!pq.empty() || !q.empty()){
            cnt++;

            if(!pq.empty()){
                int s = pq.top();
                pq.pop();

                s--;

                if(s > 0){
                    q.push({s, cnt + n});
                }
            }

            if(!q.empty() && q.front().second == cnt){
                pq.push(q.front().first);
                q.pop();
            }
        }

        return cnt;
    }
};