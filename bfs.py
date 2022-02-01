import collections

def bfs(graph,root):
    visited = set()
    queue = collections.deque([root])
    visited.add(root)
    while queue:
        vertex = queue.pop()
        visited.add(vertex)
        for i in graph[vertex]:
            if i not in visited:
                queue.append(i)
    print(visited)

graph = {
    0:[1,2,3],
    1:[0,2],
    2:[0,1,4],
    3:[0],
    4:[2]
}
print(graph)
print('BFS of above graph is : ')
bfs(graph,0)














# graph = {
#     'a':['b','c'],
#     'b':['a','d','e'],
#     'c':['a','f','g'],
#     'd':[],
#     'e':[],
#     'f':[],
#     'g':[]
# }