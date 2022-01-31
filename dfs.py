
# def dfs(node,graph):
#     visited = set()
#     if node not in graph:
#         print('Node is not present in graph')
#         return
#     stack = []
#     stack.append(node)
#     while stack:
#         current = stack.pop()
#         if current not in visited:
#             print(current)
#         visited.add(current)
#         for i in graph[current]:
#             stack.append(i)
                        
# graph = {'0': ['1', '2'],
#          '1': ['0', '3', '4'],
#          '2': ['0'],
#          '3': ['1'],
#          '4': ['2', '3']
#          }

# graph = {'0': set(['1', '2']),
#          '1': set(['0', '3', '4']),
#          '2': set(['0']),
#          '3': set(['1']),
#          '4': set(['2', '3'])}

# print(graph)
# print("DFS traversal of Graph is : ")
# dfs('0',graph)


graph= {
    'A' : ['B','C'],
    'B' : ['D','E','A'],
    'C' : ['F','G','A'],
    'D' : [],
    'E' : [],
    'F' : [],
    'G' : []
}
 
def dfs(graph, node, visited):
    if node not in visited:
        visited.append(node)
        for k in graph[node]:
            dfs(graph,k, visited)
    return visited
 
visited = dfs(graph,'A', [])
print(graph)
print('DFS of above graph is : ')
print(visited)