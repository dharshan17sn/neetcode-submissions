class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        seen = set()
        for num in nums:
            if num in seen:
                return True
            seen.add(num)  # Moved this line outside the `if` block
        return False  # Indented properly to be part of the method
