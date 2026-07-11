class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> num_freq;

        for (const auto& i : nums) {
            num_freq[i]++;
        }

        vector<vector<int>> buckets(nums.size() + 1);
        for (const auto& pair : num_freq) {
            buckets[pair.second].push_back(pair.first);
        }
        
        vector<int> top_k;
        int count = 0;
        for (int i = nums.size(); i > 0; i--) {
            for (const auto& val : buckets[i]) {
                top_k.push_back(val);
                count++;
            }

            if (count == k) break;
        }
        return top_k;
    }
};
