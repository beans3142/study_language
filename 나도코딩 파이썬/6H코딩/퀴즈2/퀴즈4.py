from random import *

wordlist=['apple','banana','orange']

answer=wordlist[choice(range(0,3))]

_answer=[]

for i in range(len(answer)):
    _answer.append('_')
    
    
while _answer != answer:
    print(_answer[0:len(answer)])
    a=input('답을 입력하세요')
    if answer.count(a)>=1:
        print(1)
        while answer.count(a)!=0:
            order=answer.find(a)
            #_answer[order].replace('_',a)
            #print(_answer)
            #answer[order].replace(a,'_')
            

