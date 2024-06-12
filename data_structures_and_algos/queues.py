
                                                #    Q U E U E S

# Queues is collection of elements which works with principle
# firs-in first-out


# Useful methods for Queues:

#   insert(queue)   -   Inserts the element e at the bottom of the queue
#   extract()       -   Removes the first element from the queue and returns it. If the queue is empty an error is returned
#   first()         -   Returns a reference to the first element of the queue without removing it. If the queue is empty an error is returned
#   is_empty()      -   Returns True if the queue is empty
#   length(queue)   -   Returns the number of elements contained in the queue


def is_empty(queue):
    if queue:
        return False
    else:
        return True


def insert(queue, element):
    queue.append(element)
    return queue


def extract(queue):
    if is_empty(queue):
        return "Queue is empty"
    return queue.pop(0)

def first(queue):
    if is_empty(queue):
        return "Queue is empty"
    else:
        return queue[0]



# queue = []
# insert(queue, 'A')
# insert(queue, 'B')
# insert(queue, 'C')
# print(queue)
# print(first(queue))





                                            #       Double-ended queues


# A double-ended queue is a queue
# that allows elements insertion or removal from both ends


# Useful methods for Queues:

#   add_first(queue, element)       - an element is inserted on top of the queue
#   add_last(queue, element)        - an element is inserted at the bottom of the queue
#   delete_first(queue)             - The top element is removed and returned.If the queue is empty an error is returned
#   delete_last(queue)              - The last element is removed and returned. If the queue is empty an error is returned
#   first()(queue)                  - top element is returned without any removal
#   last()(queue)                   - the last element is returned without any removal   




def add_first(de_queue, element):
    de_queue.insert(0, element)
    return de_queue


def add_last(de_queue, element):
    de_queue.append(element)
    return de_queue

def delete_first(de_queu):
    if de_queu:
        return de_queu.pop(0)
    return "Queue is empty"

def delete_last(de_queue):
    if de_queue:
        return deQueue.pop()
    return "Queue is empty"


deQueue = [1]
add_first(deQueue, 2)
add_last(deQueue, 3)
delete_first(deQueue)
print(deQueue)