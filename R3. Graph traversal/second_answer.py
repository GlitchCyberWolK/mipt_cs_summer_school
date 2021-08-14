def dfs(v):
    used[v] = 1
    for u in graph[v]:
        if used[u] == 0:
            dfs(u)  


n, s  = map(int, input().split())
graph = [[] for i in range(n)]
matrix = [[0]*n]*n
for i in range(n):
    matrix[i] = list(map(int, input().split()))
    for j in range(0, n):
        if matrix[i][j] == 1:
            graph[i].append(j)

used = [0]*n
dfs(s-1)
print(used.count(1))
