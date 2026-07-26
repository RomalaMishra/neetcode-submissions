from collections import Counter

class Solution:
    def frequencySort(self, nums: List[int]) -> List[int]:
        count = Counter(nums)

        bucket = [[] for _ in range(len(nums) + 1)]

        for num, freq in count.items():
            bucket[freq].append(num)

        result = []

        for freq in range(1, len(nums)+1):
            bucket[freq].sort(reverse=True)

            for num in bucket[freq]:
                result.extend([num] * freq)

        return result