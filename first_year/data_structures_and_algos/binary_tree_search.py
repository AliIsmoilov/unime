                                                # Binary Search Trees

def tree_search(tree, root, val):
    if root == None:
        print("Non existent node")
        return root
    if root == val:
        print("Found")
        return root
    if val < root:
        return tree_search(tree, tree[root]['L'], val)
    else:
        return tree_search(tree, tree[root]['R'], val)


# – The computational complexity of tree_search is O(h), h being the height of the tree
    

def iterative_tree_search(tree,root,val):
    while root is not None and root != val:
        if val < root:
            root = tree[root]['L']
        else:
            root = tree[root]['R']
        return root
    

def tree_min(tree, root):
    while tree[root]['L'] is not None:
        root = tree[root]['L']
    return root


def tree_max(tree, root):
    while tree[root]['R'] is not None:
        root = tree[root]['R']
    return root


def tree_insert(tree,node):
    y = None
    x = root(tree)
    while x is not None:
        y = x
        if node < x:
            x = tree[x]['L']
        else:
            x = tree[x]['R']
    tree[node] = {'P': y, 'L':None, 'L':None}
    if y is not None and node < y:
        tree[y]['L'] = node
    else:
        tree[y]['R'] = node