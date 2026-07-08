class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> chars_s(26, 0), chars_t(26, 0);
        for (char c : s) {
            chars_s[int(c) - 97]++;
        }
        for (char c : t) {
            chars_t[int(c) - 97]++;
            if (chars_t[int(c) - 97] > chars_s[int(c) - 97]) return false;
        }
        for (int i = 0; i < 26; i++) {
            if (chars_s[i] > chars_t[i]) return false; 
        }

        return true;
    }
};
