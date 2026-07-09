class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> hashMap; 

        for (const string& s : strs) {
            string code(26, '0');
            for (char c: s) {
                code[c - 'a']++;
            }
            hashMap[code].push_back(s);
        }

        vector<vector<string>> result; 
        for (auto& pair : hashMap) {
            result.push_back(std::move(pair.second));
        }

        return result;

    }
};
