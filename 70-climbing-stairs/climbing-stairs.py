import math
class Solution(object):
    def climbStairs(self, n):
        """
        :type n: int
        :rtype: int
        """
        if n <= 2:
            return n
        return int(math.floor((((1 + math.sqrt(5)) / 2) ** (n + 1) - ((1 - math.sqrt(5)) / 2) ** (n + 1)) / math.sqrt(5)))

        