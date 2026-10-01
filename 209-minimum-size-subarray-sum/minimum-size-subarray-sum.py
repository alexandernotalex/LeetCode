class Solution(object):
    def minSubArrayLen(self, target, nums):
        """
        :type target: int
        :type nums: List[int]
        :rtype: int
        """
        left = 0
        right = 0
        curr_sum = nums[0]
        ans = len(nums) + 1
        while left < len(nums) and right < len(nums):
            if curr_sum >= target:
                ans = min(ans, right - left + 1)
                curr_sum -= nums[left]
                left += 1
            else:
                right += 1
                if right < len(nums):
                    curr_sum += nums[right]
        if ans == len(nums) + 1:
            return 0
        return ans