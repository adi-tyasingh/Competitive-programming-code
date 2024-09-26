



def minarr(nums:list[int])->int:
    if len(nums)<1:
        return -1
    
    if len(nums) == 1:
        return nums[0]
    
    else:
        return min(nums[0], minarr(nums[1:] ) )
    
def fibonacci(n):



lst = [0,0,0,0,0,0,0,0,100000,0,0,0,0,0,0,0,0,0,0,0,0,1,10,0,0,0,0,0,0,0,0,-10,1444342342342340]

print(sumarr(lst))
print(maxarr(lst))
print(minarr(lst))