class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        if (x >= 0 && x < 10) {
            return true;
        }
        std::string str = std::to_string(x);
        int n = str.length();
        for (size_t i = 0; i < (n / 2); ++i) {
            if (str[i] != str[n - i - 1]) {
                return false;
            }
        }
        return true;
    }
};