class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mmap ={}

        for i,j in enumerate(nums):
            remaining = target - j
            if remaining in mmap:
                return [mmap[remaining],i]
            mmap[j]=i

        return []           


        