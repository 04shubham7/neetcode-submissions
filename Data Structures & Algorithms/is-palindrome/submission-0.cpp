class Solution {
public:

    string reverseString(string s) {
         string cleaned;
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }


        int l = 0, r = cleaned.size() - 1;
        while (l < r) {
            swap(cleaned[l++], cleaned[r--]);
        }
        return cleaned;
    }

    bool isPalindrome(string s) {
         string cleaned;
        for (char c : s) {
            if (isalnum(c)) {
                cleaned += tolower(c);
            }
        }


        return (reverseString(s)==cleaned);
        
    }
};
