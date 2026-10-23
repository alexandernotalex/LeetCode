class Solution(object):
    def numToLetter(self, num):
        return chr(num + 65)
    def convertToTitle(self, columnNumber):
        """
        :type columnNumber: int
        :rtype: str
        """
        title = ""
        while columnNumber > 0:
            columnNumber -= 1
            title = self.numToLetter(columnNumber % 26) + title
            columnNumber //= 26
        return title
        