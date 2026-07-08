class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length()) return false; 

        vector<int> chars(26, 0);
        for (int i = 0; i < s.length(); i++) {
            chars[s[i] - 97]++;
            chars[t[i] - 97]--;
        }
        for (int val : chars) {
            if (val != 0) return false;
        }

        return true;
    }
};
