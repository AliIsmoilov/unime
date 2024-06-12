                                                        #  TREE

#  TREE is a non linear data structure

#  Trees allow to efficiently impement some algorithms and helps better manging datas

#  With exception of the top element, each element in a tree has a parent

#  Two nodes sharing same parent nodes are said siblings


# Edge — An edge is counted as the line between the nodes

# Leaf Node — A leaf node is a node that does not have any children



#   IMPLEMENTATION

def add_root(e):
    tree = dict()
    tree[e] = {'P':None, 'L':None, 'R': None}
    return tree


def add_child(tree, node, element, side):
    if node in tree and not tree[node][side]:
        tree[node][side] = element
        tree[element] = {'P': node, 'L':None, 'R':None}


def is_root(tree, node):
    return tree[node]['P'] == None


mytree = add_root('root')
add_child(mytree, 'root', 'lft1', 'L')
add_child(mytree, 'root', 'lft2', 'L')
add_child(mytree, 'root', 'rgt1', 'R')
add_child(mytree, 'rgt1', 'rgt2', 'R')
print(mytree)
print("\n", is_root(mytree, 'rgt1'))

