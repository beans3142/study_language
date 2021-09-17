from random import *

#lst=[1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20]
lst=range(1,21)
lst=list(lst)

shuffle(lst)

print('-- 당첨자 발표 --')
print("커피 당첨자 :",lst[0])
del lst[0]
print("커피 당첨자 :",(sample(lst, 3)))
print('-- 축하합니다 --')
