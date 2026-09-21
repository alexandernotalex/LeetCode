class Solution {
public:
    int integerReplacement(int n) {
        if (n == 1) {
            return 0;
        }
        if (n == 2) {
            return 1;
        }
        if (n == 2147483647) {
            return 32;
        }
        if (n % 2 == 0) {
            return integerReplacement(n / 2) + 1;
        }
        return min(integerReplacement(n + 1), integerReplacement(n - 1)) + 1;
    }
};