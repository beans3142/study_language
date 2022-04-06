from sys import stdin
input=stdin.readline

# connected component
# 연결되어있는 그래프로 나누기

# 무방향 그래프의 경우
# 단순 dfs, bfs로 해결 가능.
# 방문한 애들 방문하지 않은 애들로 나뉘므로 각 상태에 대해 탐색해주고 그룹화.

# 방향성 그래프의 경우
# A는 B에 속하지만 B는 A에 속하지 않는 경우가 발생할 수 있음.
# 1->2, 2->3, 3->1, 3->4 이렇게 되어있으면 1,2,3 에서는 4로 갈 수 있지만
# 4에서는 1,2,3으로 가는 것이 불가능함.
# A->B and B->A 인 경우 (항상 이동 가능)
# 그 조건으로 나누면 그것이 Strongly Connected Component (SCC)
# 그 그룹의 개수를 구하는 알고리즘.

# 구하는 방법으로는 코사라주 알고리즘과 타잔 알고리즘이 있음.

# 그룹을 하나의 정점으로 보고 만든 그래프를 "메타 그래프"라고 함.
# 메타 그래프는 사이클을 형성할 수 없음. why? 사이클 별로 묶었으니까

# idea 1
# 우리가 이미 메타그래프를 안다고 가정

# idea 2
# 메타그래프 가장 끝 노드에 주목. ( 사이클 )
# 단순 탐색으로 하나의 그룹을 뽑아낼 수 있음.
# 1<-2->3->4 라고 했을 때 1,4에 각각 사이클을 구성하는 노드에서 탐색을 하면
# 1,4에 들어있는 노드들을 모두 알아낼 수 있음, 1->2 4->3은 불가능하므로

# 동작 예시

# 어떻게든 메타그래프를 구한 뒤, 맨 끝 메타노드(메타그래프를 구성하는 한 노드)
# 그 메타노드안의 하나의 노드를 알 수 있다면 그 노드를 순회함으로써
# 그룹 하나를 얻을 수 있음. 그 그룹들을 이제 그래프에서 배재시키면
# 또 다른 새로운 맨 끝 메타도드가 생김

# 그래프에서 아무 노드나 잡고 DFS를 돌리면 자신보다 낮은 (자신이 갈수있는)
# 노드는 다 구할 수 있음.
# 간선방향을 다 뒤집고 dfs를 다시 돌리면
# 해당 노드가 속해있는 사이클을 구할 수 있음
'''
graph={1:[2],2:[3,4],3:[1,7,9],4:[6,11],\
       5:[4],6:[5],7:[8,9],8:[10,12],9:[10],10:[7],11:[12],12:[11]}

rev={i:[] for i in range(1,len(graph)+1)}

v,e=map(int,input().split())
graph={i:[] for i in range(1,v+1)}
rev={i:[] for i in range(1,v+1)}
for i in range(e):
    a,b=map(int,input().split())
    graph[a].append(b)

for i in graph:
    for node in graph[i]:
        rev[node].append(i)

vi=[0]*(len(graph)+1)

def dfs(x,graph,d):
    if vi[x]==d+1:
        return
    vi[x]=d+1
    if d==1:
        cycle.append(x)
    for i in graph[x]:
        if vi[i]==d:
            dfs(i,graph,d)
            
ans=[]
for i in range(1,len(graph)+1):
    cycle=[]
    if vi[i]==0:
        dfs(i,graph,0)
        dfs(i,rev,1)
        vi=[0 if i!=2 else 2 for i in vi]
    if cycle:
        ans.append(cycle)

print(len(ans))
'''

# 저기까지 설명을 대충 듣고 혼자 만들어본 사이클 구하는 알고리즘.
# 당연히 

# 해당 코드를 통해 노드를 하나 정한 뒤 그 노드가 속한 사이클을 구할 수 있음.
# vi[n]=2 인 노드들끼리 사이클을 형성함

# 시간복잡도나 다른 부분에서 여러모로 하자가 많아 보인다.
# 그런데 이렇게만 짰는데도 https://www.acmicpc.net/problem/2150 를 해결할 수 있었다.

# 한번에 여러개의 사이클을 구할 수 없는가?

# DFS를 통해 구할 때 빠져나오는 시간을 적어주자.
# 해당 개념을 알고 바꿔본 코드.
# 해당 코드는 한 정점 아래의 정점까지 모두 구할수 있다.
# 아까는 매번 방문을 초기화시켜주었지만 이번에는 그러지 않아도 된다.
# 시간순서대로 배열을 변경시켰으므로,

graph={1:[2],2:[3,4],3:[1,7,9],4:[6,11],\
       5:[4],6:[5],7:[8,9],8:[12,10],9:[10],10:[7],11:[12],12:[11]}
rev={i:[] for i in range(1,len(graph)+1)}

n=len(graph)
for i in graph:
    for node in graph[i]:
        rev[node].append(i)

vi=[0]*(len(graph)+1)
time=[]
nowtime=0

def dfs(x,graph,d):
    global nowtime
    if vi[x]==d+1:
        return
    vi[x]=d+1
    if d==1:
        cycle.append(x)
    for i in graph[x]:
        if vi[i]==d:
            dfs(i,graph,d)
    nowtime+=1
    time.append((nowtime,x))

ans=[]
for i in range(1,n+1):

    if vi[i]==2:
        continue
    print(vi)
    dfs(i,graph,0)
    for totaltime,v in sorted(time,reverse=True):
        if vi[v]==2:
            continue
        cycle=[]
        dfs(v,rev,1)
        if cycle:
            ans.append(cycle)
    nowtime=0
    time=[]

for i in ans:
    print(i)
