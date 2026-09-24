class Solution(object):
    def reverseBits(self, n):
        ans = 0
        counter = 0
        while n:
            ans = ans * 2 + (n & 1)
            n = n >> 1
            counter += 1
        while counter < 32:
            ans *= 2
            counter += 1
        return ans
      