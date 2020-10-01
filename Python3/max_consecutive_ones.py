class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        max_value, return_value = 0,0
        for num in nums:
            if num == 1 :
                max_value += 1
                if max_value > return_value:
                    return_value = max_value
            else:
                max_value = 0
        return return_value
        
