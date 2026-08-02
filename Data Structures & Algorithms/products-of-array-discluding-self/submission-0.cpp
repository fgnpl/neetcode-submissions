class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size(), 1);
        vector<int> suf(nums.size(), 1);

        int prod = 1;
        for (int i = 0; i < nums.size(); i++) {
            pref[i] = prod;
            prod *= nums[i];
        }

        prod = 1;
        for (int i = nums.size() - 1; i >= 0; i--) {
            suf[i] = prod;
            prod *= nums[i];
        }

        for (int i = 0; i < nums.size(); i++) {
            pref[i] *= suf[i];
        }

        return pref;
    }
};
