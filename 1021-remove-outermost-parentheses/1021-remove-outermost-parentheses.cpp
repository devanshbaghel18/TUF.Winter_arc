class Solution {
public:
    string removeOuterParentheses(string s) {
        int a = s.size();
        string y = "";
        stack<char> ans;
        for (int i = 0; i < a; i++) {
            char ch = s[i];
            if (ch == '(') {
                if (ans.empty())
                    ans.push(ch);
                else {
                    y += ch;
                    ans.push(ch);
                }
            } else {
                ans.pop();
                if (ans.empty())
                    continue;
                else
                    y += ch;
            }
        }
        return y;
    }
};