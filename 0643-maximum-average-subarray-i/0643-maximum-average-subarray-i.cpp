class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int a = nums.size();
        int sumi = 0;

        for(int i = 0; i < k; i++) {
            sumi += nums[i];
        }

        double avg = (double)sumi / k;
        int left = 0;

        for(int i = k; i < a; i++) {
            sumi -= nums[left];
            sumi += nums[i];
            left++;

            avg = max(avg, (double)sumi / k);
        }

        return avg;
    }
};