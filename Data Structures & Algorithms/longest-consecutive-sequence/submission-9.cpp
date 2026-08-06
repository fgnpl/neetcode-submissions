class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seqs;
        int curr=0, maximum=0;
        for (auto i : nums) {
            seqs.insert(i);
        }

        for (auto el : seqs) {
            curr = 1;
            if (seqs.find(el - 1) == seqs.end()) {
                while (seqs.find(el + 1) != seqs.end()) {
                    curr++;
                    el++;
                }
            }
            if (curr > maximum) {
                maximum = curr;
            }
        }
        return max(curr, maximum);
    }
};
