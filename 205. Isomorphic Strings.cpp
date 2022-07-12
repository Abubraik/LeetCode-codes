class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char, char> sString;
        map<char, char> tString;

        for (int i = 0; i < t.length(); i++) {
            if (sString.find(s[i]) == sString.end() && tString.find(t[i]) == tString.end()) {
                sString[s[i]] = t[i];
                tString[t[i]] = s[i];
            }
            else if (sString[s[i]] != t[i] || tString[t[i]] != s[i])
                return false;
        }
        return true;
    }
};