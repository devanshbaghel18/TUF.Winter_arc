class Solution {
public:
    bool checkString(string s) {
        bool fla = true;
        for (int i = 0; i < s.size(); i++) {
            if (fla && s[i] == 'a') {
                continue;
            }
            if(s[i]=='b'&&fla){
            fla=false;
            continue;}
            if(!fla && s[i]=='a')
            return false;
        }
        return true;
    }
};