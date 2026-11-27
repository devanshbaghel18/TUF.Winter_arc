class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int>ans;
        for(int i=0;i<nums.size();i++){
                ans.insert(nums[i]);
        }
        int k=0;
        for(auto c:ans){
            nums[k]=c;
            k++;
        }
        return ans.size();
    }
};