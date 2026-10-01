class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        left = 0
        right = 0
        n = len(nums)
        curr_sum = nums[0]
        ans = n + 1
        while left < n and right < n:
            if curr_sum >= target:
                ans = min(ans, right - left + 1)
                curr_sum -= nums[left]
                left += 1
            else:
                right += 1
                if right < n:
                    curr_sum += nums[right]
        if ans == n + 1:
            return 0
        return ans