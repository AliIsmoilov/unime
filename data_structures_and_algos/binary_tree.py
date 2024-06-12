# Binry is an ordered tree with the following properties:
    
    # - Every node has at most two children
    
    # - Each child node is labelled as being either left child or right child




#   left()      -   Returns the left child of a given node, or None if the given node has not a left child

#   right()     -   Returns the right child of a given node, or None if the given node has not a right child 

#   sibling()   -   Return the sibling of the given node, or None if the given node has no sibling


def is_root(tree, node):
    return tree[node]['P'] == None


def depth(tree, start):
    if is_root(tree, start):
        return 1
    else:
        return 1 + depth(tree, tree[start]['P'])
    

def is_leaf(tree, node):
    return not (tree[node]['L'] or tree[node]['R'])


def sibling(tree, node):
    parent = tree[node]['P']
    if parent is None:
        return None
    else:
        if node == tree[parent]['L']:
            return tree[parent]['R']
        else:
            return tree[parent]['L']
        

def bfs(tree, node):
    queue, visited = []

    while queue:
        current = queue.pop(0)
        visited.append(node)
        if tree[current]['L']:
            queue.append(tree[current]['L'])
        if tree[current]['R']:
            queue.append(tree[current]['R'])
    return visited


def btb(tree, root):
    queue = [root]
    visited, result = [],[]
    
    while queue:
        current = queue.pop(0)
        children = 0
        if current not in visited:
            visited.append(current)
        
        lc = tree[current]['L']
        rc = tree[current]['R']
        if lc != None:
            queue.append(lc)
            children+=1
        if rc != None:
            queue.append(rc)
            children+=1
        if children == 1:
            result.append(current)
    
    return result