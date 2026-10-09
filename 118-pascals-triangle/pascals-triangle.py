class Solution(object):
    def generate(self, numRows):
        """
        :type numRows: int
        :rtype: List[List[int]]
        """
        ans = []
        ans.append([1])
        for i in range(numRows - 1):
            tmp = [1]
            for j in range(i):
                tmp.append(ans[-1][j] + ans[-1][j + 1])
            tmp.append(1)
            ans.append(tmp)
        return ans
        