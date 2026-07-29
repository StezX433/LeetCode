class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mmap = {}

        for i,j in enumerate(nums):
            collapse = target - j
            if collapse in mmap:
                return [mmap[collapse],i]
            mmap[j]=i

        return []
        