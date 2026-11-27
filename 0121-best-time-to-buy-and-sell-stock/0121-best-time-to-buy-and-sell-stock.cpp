class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int a=prices.size();
        int mini=prices[0];
        int pro=0;
        for(int i=1;i<a;i++){
            pro=max(pro,prices[i]-mini);
            mini=min(mini,prices[i]);
        }
        return pro;
    }
};