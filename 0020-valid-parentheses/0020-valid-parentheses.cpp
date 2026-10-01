class Solution {
public:
    bool isValid(string s) {
        stack<char> ans;

        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                ans.push(c);
            } else {
                if (ans.empty())
                    return false;

                if (c == ')' && ans.top() == '(')
                    ans.pop();
                else if (c == '}' && ans.top() == '{')
                    ans.pop();
                else if (c == ']' && ans.top() == '[')
                    ans.pop();
                else
                    return false;
            }
        }
        return ans.empty();
    }
};
