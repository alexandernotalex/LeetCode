class Solution {
public:
    bool IsPalindrome(int begin, int end, string s) {
        while (begin < end) {
            if (s[begin] != s[end]) {
                return false;
            }
            ++begin;
            --end;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int begin = 0, end = s.length() - 1;
        while (begin < end) {
            if (s[begin] != s[end]) {
                bool flag_1 = IsPalindrome(begin + 1, end, s);
                bool flag_2 = IsPalindrome(begin, end - 1, s);
                if (flag_1 || flag_2) {
                    return true;
                }
                return false;
            }
            ++begin;
            --end;
        }
        return true;
    }
};