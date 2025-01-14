from random import randrange

def quick_sort(array):
    if len(array) < 2:
        return array
    else:
        # pivot = array.pop(0)
        pivot = array.pop(randrange(len(array)))
        smaller = [i for i in array if i <= pivot]
        bigger = [i for i in array if i > pivot]
        return quick_sort(smaller) + [pivot] + quick_sort(bigger)



nums = [2,1,55,32,32,21,95,99,54, 65,7,20,25, 97, 8, 77, 75, 83]
print(quick_sort(nums))


# Quicksort works relying on divide and conquer principle

