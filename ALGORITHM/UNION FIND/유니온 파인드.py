def find(tar):
    if tar==par[tar]:
        return tar
    par[tar]=find(par[tar])
    return par[tar]

def union(a,b):
    
    a=find(a)
    b=find(b)

    if a<b:
        par[b]=a
    else:
        par[a]=b


par=[0,1,2,3,4,5]

        
