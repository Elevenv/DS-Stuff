import collections

def bfs(graph,root):
    visited = []
    queue = collections.deque([root])
    print(queue)
    # visited.add(root)
    while queue:
        vertex = queue.popleft()
        if vertex not in visited:
            visited.append(vertex)
        print(vertex)
        for i in graph[vertex]:
            if i not in visited:
                queue.append(i)
                print(graph[vertex],'series : ',i)
    # visited_set = set(visited)
    print(visited)

# graph = {
#     0:[1,2,3],
#     1:[0,2],
#     2:[0,1,4],
#     3:[0],
#     4:[2]
# }

graph = {
    'a':['b','c'],
    'b':['a','d','e'],
    'c':['a','f','g'],
    'd':[],
    'e':[],
    'f':[],
    'g':[]
}

print(graph)
print('BFS of above graph is : ')
# bfs(graph,0)
bfs(graph,'a')













