class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sp;
        int pos = 0;
        size_t found;
        for (int i = 0; i < t.length(), sp < s.length(); i++) {
            found = t.find(s[sp], pos);
            if (found != string::npos) {
                pos = found + 1;
                sp++;
            }
            else
                return false;
        }
        return true;
    }
};