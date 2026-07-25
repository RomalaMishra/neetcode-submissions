class Solution:
    def sortColors(self, nums: List[int]) -> None:
        count = Counter(nums)
        index=0
        for color in range(3):
            for _ in range(count[color]):
                nums[index]=color
                index+=1
        