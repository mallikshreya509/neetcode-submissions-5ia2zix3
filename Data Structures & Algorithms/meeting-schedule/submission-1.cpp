/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
   static bool cmp(const Interval& a, const Interval& b){
         return a.start<b.start;
    }
    bool canAttendMeetings(vector<Interval>& inter) {
        
        int n=inter.size();
        sort(inter.begin(),inter.end(),cmp);
          for(int i=0;i<n-1;i++){
            if(inter[i].end>inter[i+1].start) return false;
          }   
       return true;
    }
};
