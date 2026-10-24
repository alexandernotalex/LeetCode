class Solution(object):
    def titleToNumber(self, columnTitle):
        """
        :type columnTitle: str
        :rtype: int
        """
        result = 0
        for ch in columnTitle:
            digit = ord(ch) - ord('A') + 1
            result = result * 26 + digit
        return result
        