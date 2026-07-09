class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<vector<int>>> codes;
        vector<vector<string>> strings;
        for (string str1: strs) {
            vector<int> code1(26, 0);
            for (char c: str1) {
                code1[int(c) - 'a']++;
            }

            bool found = false;
            for (int i = 0; i < codes.size(); i++) {
                vector<int> code2 = codes[i][0];
                if (code1.size() != code2.size()) continue;

                bool match = true;
                for (int j = 0; j < 26; j++) {
                    if (code1[j] != code2[j]) {
                        match = false;
                        break;
                    }
                }
                if (match) {
                    found = true;
                    codes[i].push_back({code1});
                    strings[i].push_back({str1});
                    break;
                }
            }
            if (!found) {
                codes.push_back({code1});
                strings.push_back({str1});
            }
        }
        return strings;
    }
};
