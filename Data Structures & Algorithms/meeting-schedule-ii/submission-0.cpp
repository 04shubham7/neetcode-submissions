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
    int minMeetingRooms(vector<Interval>& intervals) {
        int n=intervals.size();
        if(n==0)return 0;
        vector<int>st(n);
        vector<int>et(n);

        for(int i=0;i<n;i++){
            st[i]=intervals[i].start;
            et[i]=intervals[i].end;
        }
        sort(st.begin(),st.end());
        sort(et.begin(),et.end());
        int r=0;
        int mx_rooms=0;
        int s_ptr=0;
        int e_ptr=0;
        while(s_ptr<n){
            if(st[s_ptr]<et[e_ptr]){
                r++;
                s_ptr++;
            }else{
                r--;
                e_ptr++;
            }
            mx_rooms=max(mx_rooms,r);
        }
        return mx_rooms;
    }
};
