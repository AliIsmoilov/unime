def binary_search(list, target):
    left = 0
    right = len(list)-1
    mid = 0

    while left<=right:
        mid = (right+left)//2

        # If x is greater, ignore left half
        if list[mid] < target:
            left = mid + 1

        # If x is smaller, ignore right half
        elif list[mid] > target:
            right = mid-1
        
        else:
            return mid
    return -1

# Test array
arr = [ 2, 3, 4, 10, 40]
x = 10
 
# Function call
result = binary_search(arr, x)
print(result)