#백준
#2164번 카드2

from collections import deque
num = int(input())
que = deque()

for i in range(1,num+1):
    que.append(i)
 
while len(que)!=1:
    que.popleft()
    que.append(que.popleft())
 
print(que[0])
