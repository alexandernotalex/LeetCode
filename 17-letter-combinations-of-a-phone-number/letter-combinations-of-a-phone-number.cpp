class Solution {
public:
    string NumToLetters(char n) {
        if (n == '2') {
            return "abc";
        }
        if (n == '3') {
            return "def";
        }
        if (n == '4') {
            return "ghi";
        }
        if (n == '5') {
            return "jkl";
        }
        if (n == '6') {
            return "mno";
        }
        if (n == '7') {
            return "pqrs";
        }
        if (n == '8') {
            return "tuv";
        }
        return "wxyz";
    }
    vector<string> letterCombinations(string digits) {
        int n = digits.length();
        vector<string> letters, ans;
        letters.reserve(4);
        for (int i = 0; i < n; ++i) {
            letters.push_back(NumToLetters(digits[i]));
        }
        if (n == 1) {
            for (int i = 0; i < letters[0].length(); ++i) {
                string str = "";
                str += letters[0][i];
                ans.push_back(str);
            }
        }
        if (n == 2) {
            for (int i = 0; i < letters[0].length(); ++i) {
                for (int j = 0; j < letters[1].length(); ++j) {
                    string str = "";
                    str += letters[0][i];
                    str += letters[1][j];
                    ans.push_back(str);
                }
            }
        }
        if (n == 3) {
            for (int i = 0; i < letters[0].length(); ++i) {
                for (int j = 0; j < letters[1].length(); ++j) {
                    for (int k = 0; k < letters[2].length(); ++k) {
                        string str = "";
                        str += letters[0][i];
                        str += letters[1][j];
                        str += letters[2][k];
                        ans.push_back(str);
                    }
                }
            }
        }
        if (n == 4) {
            for (int i = 0; i < letters[0].length(); ++i) {
                for (int j = 0; j < letters[1].length(); ++j) {
                    for (int k = 0; k < letters[2].length(); ++k) {
                        for (int m = 0; m < letters[3].length(); ++m) {
                            string str = "";
                            str += letters[0][i];
                            str += letters[1][j];
                            str += letters[2][k];
                            str += letters[3][m];
                            ans.push_back(str);
                        }
                    }
                }
            }
        }
        return ans;
    }
};