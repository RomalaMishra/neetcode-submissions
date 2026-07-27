class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        currentsum = nums[0]
        maxsum = nums[0]

        for num in nums[1:]:
            currentsum = max(num,currentsum+num)
            maxsum = max(maxsum,currentsum)
        return maxsum
        