#contains duplicate or not
#nums = [1,2,3,4] 
def  contain_duplicate(nums):
  seen = set()
  for num in nums:
      if num in seen:
         seen.add(num)
         return True
      seen.add(num)
  return False
nums = [1,2,3,1]
print(contain_duplicate(nums))  # prints True if the nums list contains duplicates, False otherwise