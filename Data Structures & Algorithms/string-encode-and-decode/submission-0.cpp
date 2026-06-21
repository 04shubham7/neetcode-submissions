class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(string &s:strs){
            encoded+=to_string(s.size())+"#"+s;
        }
        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>res;
        int i=0;
        while(i<s.size()){
            //read length until '#'
            int j=i;
            while(s[j]!='#')j++;
            int length=stoi(s.substr(i,j-i));

            //extract the string of given length
            string str=s.substr(j+1,length);
            res.push_back(str);

            //move pointer forward
            i=j+1+length;
        }
        return res;
    }
};
