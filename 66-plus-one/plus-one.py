class Solution(object):
    def plusOne(self, digits):
        idx = 0
        n = len(digits)
        while idx < n and digits[n - 1 - idx] == 9:
            idx += 1
        if idx == n:
            ans = [1]
            ans.extend([0]*n)
            return ans
        ans = [0] * n
        for i in range(n - 1 - idx):
            ans[i] = digits[i]
        ans[n - 1 - idx] = digits[n - 1 - idx] + 1
        return ans
                

        