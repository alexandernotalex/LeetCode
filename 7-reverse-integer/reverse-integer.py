class Solution(object):
    def reverse(self, x):
        y = str(x)
        y = y[::-1]
        if y[-1] == '-':
            y = "-" + y[:-1]
        y = int(y)
        if - 2 ** 31 <= y <= 2 ** 31 - 1:
            return y
        return 0
        