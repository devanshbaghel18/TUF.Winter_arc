class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int a=nums.size();
        int k=0;
        for(int i=0;i<a;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[k]);
                k++;
            }
            else continue;
        }
    }
};