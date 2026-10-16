class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int count = 0;

        for (int i = 0; i < n; i++) {
            unordered_map<int, int> ans;

            for (int j = i; j < n; j++) {
                ans[nums[j]]++;

                int d = ans.size();
                count += d * d;
            }
        }

        return count;
    }
};