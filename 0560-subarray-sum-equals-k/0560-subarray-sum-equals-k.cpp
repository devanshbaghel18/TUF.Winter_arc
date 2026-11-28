class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;

        int sum = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int d = sum - k;

            if(mp.find(d) != mp.end()) {
                count += mp[d];
            }

            mp[sum]++;
        }

        return count;
    }
};