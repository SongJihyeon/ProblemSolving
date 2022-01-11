#백준
#2606번 바이러스

com = int(input())
con = int(input())

check_list = []
for i in range(com+1):
    check_list.append([])

for i in range(con):
    a,b = map(int, input().split())
    check_list[a].append(b)
    check_list[b].append(a)

res = []
def dfs(check, cur, res):
    res.append(cur)
    check[cur].sort()
    for link in check[cur]:
        if link not in res:
            dfs(check, link, res)

dfs(check_list, 1, res)
print(len(res)-1)
