class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, int> dict;
        for (auto x : nums) {
            if (dict.find(x) != dict.end()) return true;
            dict[x] = 1;
        }
        return false;
    }
};