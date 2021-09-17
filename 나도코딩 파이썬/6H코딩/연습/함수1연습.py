from random import *

def sum(num1,num2):
    return num1+num2

def mul(num1,num2):
    return num1*num2
'''
a=sum(2,3)
print(a)
'''
for i in range(2,10):
    for j in range(1,10):
        print(i,'*',j,'=',mul(i,j))
