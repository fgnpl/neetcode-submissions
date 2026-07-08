class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> seen;
        for (auto val : nums) {
            if (seen.find(val) != seen.end()) return true;
            seen.insert(val);
        }

        return false;
    }
};