class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());
        int p1, p2;
        for (int i = 0; i < nums.size(); i++) {
            if (i != 0 && nums[i] == nums[i-1]) continue;
            p1 = i + 1;
            p2 = nums.size() - 1;
            while (p1 < p2) {
                int sum = nums[i] + nums[p1] + nums[p2];
                if (sum == 0) {
                    res.push_back({nums[i], nums[p1], nums[p2]});
                    while (p1 < p2 && nums[p1] == nums[p1+1]) {
                        p1++;
                    }
                    while (p1 < p2 && nums[p2] == nums[p2-1]) {
                        p2--;
                    }
                    p1++;
                    p2--;
                } else if (sum> 0) {
                    p2--;
                    if (p2 < 0) break;
                } else {
                    p1++;
                }
            }
        }
        return res;
    }
};
