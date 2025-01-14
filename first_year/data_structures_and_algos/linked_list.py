                                        # LINKED LIST  

# Linked list is a data structures which stores elements in certain order
# Unlike list elements of the linked list stores everywhere in memory 
# and they can find each other with pointer in  node
# Thanks to this references, the linear order of the sequence can be represented

# The first element of a list is called head, the last is the tail

def create():
    llist = dict()
    llist['head'] = 'tail'
    llist['tail'] = 0
    return llist


def add_first(llist, element):
    print(llist)
    llist[element] = llist['head']
    print(llist)
    llist['head'] = element
    return llist


def add_last(llist, element):
    curr = 'head'
    while curr != 'tail':
        next = llist[curr]
        if next == 'tail':
            llist[element] = llist[curr]
            llist[curr] = element
            break
        curr = next
    return llist


def del_first(llist):
    x = llist['head']
    llist['head'] = x
    del llist[x]

def itraverse(llist):
    curr = 'head'
    path = []
    path.append((0, curr))
    k = 1
    
    while curr != 'tail':
        next = llist[curr]
        path.append((k, next))
        curr = next
        k+=1
    return path


def printall(llist):
    curr = 'head'
    while curr != 'tail':
        next = llist[curr]
        print(curr, "\t-->\t", next)
        curr = next

# myLlist = create()
# add_last(myLlist, 25)
# add_last(myLlist, 35)
# add_last(myLlist, 45)


# print(myLlist)
# print(itraverse(myLlist))
# printall(myLlist)
        



                                                    # Doubly linked list
        


def createDoublyLlist():
    doublyLlist = dict()
    doublyLlist['head'] = {'prev':None, 'next':'tail'}
    doublyLlist['tail'] = {'prev': 'head', 'next': None}
    return doublyLlist


def printAllDoubleLlist(dlist):
    curr = 'head'
    while curr != 'tail':
        next = dlist[curr]['next']
        print(curr, "\t<==>\t", next)
        curr = next



myDoublyLlist = createDoublyLlist()
# printAllDoubleLlist(myDoublyLlist)



# def reverseList(self, head: Optional[ListNode]):
#     temp = head
#     prev = None
#     front = None
    
#     while temp != None:
#         front = temp.next
#         temp.next = prev
#         prev = temp
#         temp = front
#     return prev


def deleteTarget(llist, target):
    curr = llist[target]
    llist[curr['prev']]['next'] = curr['next']
    llist[curr['next']]['prev'] = curr['prev']
    del llist[target]

    return llist


def dllb(list, low, high):
    curr = list['head']['next']
    removed = []
    while curr != 'tail':
        next = list[curr]['next']
        prev = list[curr]['prev']

        if curr > low and curr < high:
           list[prev]['next'] = next
           list[next]['prev'] = prev
           del list[curr]
           removed.append(curr)
        curr = next

    return removed, list

listx = {
    'head':{'prev': None, 'next': 12},
    12:{'prev':'head', 'next':20}, 
    20:{'prev':12, 'next':15},
    15:{'prev':20, 'next':2},
    2:{'prev':15, 'next': 'tail'},
    'tail':{'prev':2, 'next': None}
}


# print("after: \n", deleteTarget(listx, 20))
resp, list = dllb(listx, 5, 20)
print(resp)
print("\n\n", list)
