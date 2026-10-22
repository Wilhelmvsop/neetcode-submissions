class Solution:
    def countComponents(self, n: int, edges: List[List[int]]) -> int:
        adj = [[] for _ in range (n)]
        visited = [False] * n
        res = 0
        m = len(edges)
        def dfs(node):
            for i in adj[node]:
                if not visited[i]:
                    visited[i] = True
                    dfs(i)
        for u, v in edges:
            adj[u].append(v)
            adj[v].append(u)
        for node in range (n):
            if not visited[node]:
                visited[node] = True
                dfs(node)
                res = res + 1
        return res

                