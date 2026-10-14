class Solution(object):
    def lengthOfLastWord(self, s):
        strk = s.split()
        return len(strk[-1])
        