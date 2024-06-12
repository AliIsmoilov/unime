
                                            # S T A C K

# Stack is the collection of elements that 
# can be inserted or removed according to the principle last-in, first-out




# Useful methods for stack:
#   - create()
#   - push(mylist, element)   
#   - pop(mylist)  
#   - top(mylist)
#   - is_empty(mylist)
#   - length(mylist)



# IMPLEMENTATION of methods

def create():
    return []


def push(list, element):
    list.append(element)
    return list


def pop(list):
    return list.pop()


def top(list):
    return list[-1]


def is_empty(mylist):
    if mylist:
        return False
    else:
        return True

def length(mylist):
    count = 0
    for element in mylist:
        count+=1
    return count



myStack = create() 
push(myStack, 1)
push(myStack, 2)
push(myStack, 3)
push(myStack, 4)
push(myStack, 5)
# print(pop(myStack))
# print(myStack)
# print(pop(myStack))
# print(myStack)
# print(top(myStack))
# print(is_empty(myStack))
print(length(myStack))
