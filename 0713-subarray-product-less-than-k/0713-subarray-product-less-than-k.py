class Solution:
    def numSubarrayProductLessThanK(self, nums: List[int], k: int) -> int:
        count = 0
        product = 1
        n = len(nums)
        end = 0
        for start in range(n):
            product *= nums[start]
            while(product >= k and start >= end):
                product /= nums[end]
                end+= 1
            count += (start - end + 1)
        return count

        