from random import *

num=0

for i in range(1,51):
    time=randint(5,51)
    if 5 <= time < 16:
        print("[0] {0}번째 손님 (소요시간 : {1}분)".format(i,time))
        num+=1
    else:
        print("[ ] {0}번째 손님 (소요시간 : {1}분)".format(i,time))

print("총 탑승 승객 : {} 분".format(num))
