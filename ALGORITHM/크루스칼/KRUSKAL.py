from collections import deque
from heapq import heappop,heappush
from collections import defaultdict
from sys import stdin
input=stdin.readline

n,m=map(int,input().split())

# 유니온 파인드

def find(tar):
    if tar==par[tar]:
        return tar
    par[tar]=find(par[tar])
    return par[tar]

def union(a,b,val):
    global canremove
    c=a
    d=b
    a=find(a)
    b=find(b)

    if a<b:
        par[b]=a
        mst[c][d]=mst[d][c]=val
    elif a>b:
        par[a]=b
        mst[c][d]=mst[d][c]=val

mst={i:defaultdict(int) for i in range(1,n+1)}

par=list(range(n+1))

node=[]

for i in range(m):
    a,b,val=map(int,input().split())
    node.append((val,a,b))

node.sort()
    
for val,a,b in node:
    union(a,b,val)

total=0
for i in mst:
    for j in mst[i]:
        total+=mst[i][j]

print(total//2)

'''
5 4
1 2 1
2 3 2
3 4 3
4 5 4
'''

'''
7 11
1 7 12
7 4 13
2 4 24
2 1 67
4 1 28
7 5 73
1 5 17
2 5 62
5 3 20
6 5 45
6 3 37
'''

