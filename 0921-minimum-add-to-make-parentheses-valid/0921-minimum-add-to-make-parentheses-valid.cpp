class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>ans;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                ans.push('(');
                continue;
            }
            if(s[i]==')'&&ans .size()>0){
                ans.pop();
            }
            else count++;
        }
        while(ans.size()>0){
            count++;
            ans.pop();
        }
        return count;
    }
};