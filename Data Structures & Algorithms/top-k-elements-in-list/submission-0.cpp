class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
          int n=nums.size();
        
        unordered_map<int,int>mp;
        for(auto &it:nums){
            mp[it]++;
        }
        // move to vector of pairs
        vector<pair<int,int>> vec(mp.begin(), mp.end());

        // sort by frequency descending
        sort(vec.begin(), vec.end(), [](auto &a, auto &b){
            return a.second > b.second;
        });

        // collect top k
        vector<int> ans;
        for(int i=0; i<k; i++){
            ans.push_back(vec[i].first);
        }
        return ans;

    }
};
