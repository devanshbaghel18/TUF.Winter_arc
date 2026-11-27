class Solution {
public:
    void rotate(vector<int>& nums, int k) {

        int a=nums.size();
        if(a==0)
        return ;
        k=k%a;
        int left=0,right=a-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        left=0;
        right=k-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        left=k;
        right=a-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
    }
};