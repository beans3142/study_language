from random import *

wordlist=['apple','banana','orange']

answer=choice(wordlist)
letters=''
n=0

while True:
    succeed=True
    
    for i in answer:
        if i in letters:
            print(i,end=' ')
        else:
            print('_',end=' ')
            succeed=False

    if succeed:
        print('\nsuccess')
        break
       
    letter=input('\n입력 : ')
    
    if letter not in letters:
        letters+=letter

    if letter in answer:
        print('correct')
    else:
        print('wrong')
