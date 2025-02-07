class Solution {
public:

    bool alphanum(char ch) {
        return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9');
    }

    bool isPalindrome(string s) {
        int st=0, e=s.size()-1;
        while(st < e) {
            while(st < e && !alphanum(s[st])) {
                st++;
            }
            while(st < e && !alphanum(s[e])) {
                e--;
            }
            if(tolower(s[st]) != tolower(s[e])) {
                return false;
            }
            st++;
            e--;
        }
        return true;
    }
};
