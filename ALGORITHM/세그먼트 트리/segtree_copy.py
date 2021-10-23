N = 10
ARRAY = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
tree = [0]*(N*4)
def init(start, end, index):
    print(tree)
    if start==end:
        #가장 끝에 도달 했으면 ARRAY를 삽입
        tree[index] = ARRAY[start]
        return tree[index]
    mid = (start+end)//2
    tree[index] = init(start,mid,index*2)+init(mid+1,end,index*2+1)
    return tree[index]
    #좌측 노드와 우측 노드를 합한다

def query(start,end,index,qLeft,qRight):
    #범위를 벗어나는 경우
    if qLeft>end or qRight<start:
        return 0
    #범위 내에 있는 경우
    if qLeft <= start and end<=qRight:
        return tree[index]
    mid = (start+end)//2
    return query(start,mid,index*2,qLeft,qRight)\
           +query(mid+1,end,index*2+1,qLeft,qRight)

init(1,N,1)
s,e = map(int,input().split())
print(query(1,N,1,s,e))#s~e 구간합 출력
