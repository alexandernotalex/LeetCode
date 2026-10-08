class Solution(object):
    def longestCommonPrefix(self, strs):
        """
        :type strs: List[str]
        :rtype: str
        """
        sorted_strs = sorted(strs)
        ans = ""
        idx = 0
        while idx < len(sorted_strs[0]) and idx < len(sorted_strs[-1]):
            if sorted_strs[0][idx] == sorted_strs[-1][idx]:
                ans += sorted_strs[0][idx]
                idx += 1
            else:
                break
        return ans 
        