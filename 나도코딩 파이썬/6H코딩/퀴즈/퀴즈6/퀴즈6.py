import pickle
numlst=list(range(1,51))
print(numlst)
'''
for i in range(1,51):
    f=open('{0}주차.txt'.format(i),'w',encoding='utf8')
    f.write('- {0} 주차 주간보고 -\n'.format(i))
    f.write('부서 :\n이름 :\n업무 요악 :')
f.close()

for i in range(1,51):
    f=open('{0}주차.txt'.format(i),'r',encoding='utf8')
    print(f.read())
f.close()

for i in range(1,51):
    f=open("{0}주차.pickle".format(i),"wb")
    content='- {0} 주차 주간보고 -\n부서 :\n업무 :\n업무 요약 :'.format(i)
    pickle.dump(content,f)
    f.close()

for i in range(1,51):
    f=open("{0}주차.pickle".format(i),"rb")
    content = pickle.load(f)
    print(content)
    f.close()

for i in range(1,51):
    with open("{0}주차.txt".format(i),'r',encoding='utf8') as f:
        print(f.read())
'''

with open("{n}주차.txt".format(n=numlst[:50]),'r',encoding='utf8') as f:
        print(f.read())
