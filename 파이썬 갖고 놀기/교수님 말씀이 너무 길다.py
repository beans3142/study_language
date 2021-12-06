from random import *

#로또 시뮬레이터

a=sample(range(1,45),6)
print(*a)
chart={i:0 for i in range(7)}

for i in range(100000000):
    cnt=0
    case=sample(range(1,45),6)
    for j in range(6):
        if a[j]==case[j]:
            cnt+=1
    chart[cnt]+=1

print(chart)
