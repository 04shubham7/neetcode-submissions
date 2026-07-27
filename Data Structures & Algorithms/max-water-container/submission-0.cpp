class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size()-1;
        int max_ar=0;

        while(l<r){
            int curr_w=r-l;
            int curr_h=min(heights[l],heights[r]);
            int curr_ar=curr_w*curr_h;

            max_ar=max(max_ar,curr_ar);

            if(heights[l]<heights[r]){
                l++;
            }else{
                r--;
            }
        }
        return max_ar;
    }
};
