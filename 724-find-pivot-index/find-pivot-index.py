class Solution(object):
    def pivotIndex(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        pivot = 0
        left = 0
        right = sum(nums) - nums[0]
        while left != right and pivot < len(nums) - 1:
            left += nums[pivot]
            pivot += 1
            right -= nums[pivot]
        if pivot < len(nums) - 1 or left == right:
            return pivot
        return -1