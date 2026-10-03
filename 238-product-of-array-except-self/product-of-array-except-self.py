class Solution(object):
    def productExceptSelf(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        n = len(nums)
        prefix_product = [nums[0]]
        for i in range(1, n):
            prefix_product.append(prefix_product[i - 1] * nums[i])
        suffix_product = [nums[n - 1]] * n
        for i in range(1, n):
            suffix_product[n - i - 1] = suffix_product[n - i] * nums[n - i - 1]
        ans = [suffix_product[1]]
        for i in range(1, n - 1):
            ans.append(prefix_product[i - 1] * suffix_product[i + 1])
        ans.append(prefix_product[n - 2])
        return ans
        