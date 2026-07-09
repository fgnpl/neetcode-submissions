class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        unordered_map<string, vector<string>> hashMap; 

        for (const string& s : strs) {
            string sorted_s = s;
            sort(sorted_s.begin(), sorted_s.end());
            hashMap[sorted_s].push_back(s);
        }

        vector<vector<string>> result; 
        result.reserve(hashMap.size());

        for (auto& pair : hashMap) {
            result.push_back(std::move(pair.second));
        }

        return result;

    }
};
