class Solution(object):
    def hammingDistance(self, x, y):
        counter = 0
        while x or y:
            counter += ((x & 1) ^ (y & 1))
            x = x >> 1
            y = y >> 1
        return counter
        