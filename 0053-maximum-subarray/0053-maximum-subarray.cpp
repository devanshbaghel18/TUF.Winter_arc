class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a=nums.size();
        int csum=nums[0];
        int maxi=csum;
        for(int i=1;i<a;i++){
            csum=max(nums[i],csum+nums[i]);
            maxi=max(maxi,csum);
        }
        return maxi;
    }
};