class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<int,char>mpp1;
        for(auto & i:s){
            mpp1[i]++;
        }
        unordered_map<int,char>mpp2;
        for(auto & i:t){
            mpp2[i]++;
        }
        return mpp1==mpp2;
    }
};
