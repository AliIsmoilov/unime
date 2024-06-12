
#   - vertex_count()
#   - edge_count()
#   - vertices()
#   - edges()
#   - get_edge(u,v)
#   - degree(v)
#   - incident_edges(v)
#   - insert_vertex(v)
#   - remove_vertex(v)
#   - insert_edge(u,v,x)
#   - remove_edge(e)



def create_graph():
    return dict()

def add_node(graph, node):
    if not node in graph:
        graph[node] = []
    return graph


def add_edge(graph, u, v):
    if u in graph and v in graph:
        if v not in graph[u]:
            graph[u].append(v)
        if u not in graph[v]:
            graph[v].append(u)
    return graph


def add_nodes(graph, nodes):
    for node in nodes:
        graph = add_node(graph, node)
    return graph



def bfs(graph, start):
    explored = []
    q = []
    q.append(start)
    
    while q:
        u = q.pop()
        if u not in explored:
            explored.append(u)
            for v in list(graph[u]):
                q.append(v)
                # print(q)
    return explored

graph = {
    1: set([2, 5]),
    2: set([1, 3, 4, 5]),
    3: set([2, 4]),
    4: set([2, 3, 5]),
    5: set([1, 2, 4])
}

print(bfs(graph, 1))