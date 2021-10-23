from math import *
from random import *
#n=int(input())
n=8
h_tree=2**(ceil(log2(n)+1))
ans=0

tree=[0 for i in range(h_tree)]
arr=[randint(1,20) for i in range(n)]
arr=list(range(8))

def init(l,r,node):
    if l==r:
        tree[node]=arr[l]
        return
    else:
        mid=(l+r)//2
        init(l,mid,node*2)
        init(mid+1,r,node*2+1)
        tree[node]=tree[node*2]+tree[node*2+1]

def update(l,r,node,idx,val):
    if l==r==idx:
        tree[node]=val
        return tree[node]
    if idx<l or r < idx:
        return 0
    else:
        mid=(l+r)//2
        update(l,mid,node*2,idx,val)
        update(mid+1,r,node*2+1,idx,val)
        tree[node]=tree[node*2]+tree[node*2+1]

def query(l,r,node,lidx,ridx):
    global ans
    if ridx<l or r<=lidx:
        return
    elif lidx<=l and r<=ridx:
        ans+=tree[node]
        return
    elif lidx<=r or l <= ridx:
        mid=(l+r)//2
        query(l,mid,node*2,lidx,ridx)
        query(mid+1,r,node*2+1,lidx,ridx)
        return

def postorder(idx):
    if idx>=len(tree) or tree[idx]==0:
        return
    postorder(2*idx)
    postorder(2*idx+1)
    print(tree[idx])

def backorder(idx):
    backorder(2*idx)
    print(tree[idx])
    backorder(2*idx+1)

def dfs(idx):
    print(tree[idx])
    dfs(2*idx)
    dfs(2*idx+1)


init(0,n-1,1)
postorder(1)
print(arr)
print(tree)
'''
for i in range(5):
    ans=0
    lidx,ridx=map(int,input().split())
    query(0,n-1,1,lidx,ridx)
    print(ans)
'''
for i in range(3):
    nidx,value=map(int,input().split())
    update(0,n-1,1,nidx,value)
    print(tree)
  
