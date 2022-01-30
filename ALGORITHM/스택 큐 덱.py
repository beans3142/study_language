class STACK:
    # self는 지역변수 ( class라는 영역 안에서 쓸 수 있게 해주는 변수라고 이해하자 )
    def __init__(self,maxsize): # init은 변수=STACK(값) 이렇게 전달받을 때 전달되는 그 값이 init으로 들어온다.
                                # 기본적으로 들어와야 한 값이라 생각하면 된다.

        self.maxsize=maxsize
        # 스택의 최대 사이즈를 self.maxsize에 저장해주었다.
        
        self.top=-1
        # 가장 위에 있는 값의 위치를 나타내줄 변수이다.
        # 배열의 시작 위치는 0이고 맨 처음에는 비어있으므로 0이 아닌 -1을 넣어준다.
        
        # 스택은 후입 선출 ( 나중에 들어온 것이 먼저 나감 )이고
        # 값의 들어오고 나가는 것이 모두 top에서 일어난다.

        # top이 증가하면 삽입, top이 감소하면 삭제가 이루어진다.

        self.arr=[0]*self.maxsize
        # 실제로 값이 쌓이거나 빠져나갈 배열
        # 해당 배열은 0으로 초기화 해주었지만 이 코드가 어떻게 작동하는지 안다면
        # 0으로 초기화 하든 10억으로 초기화 하든 문자를 넣든 상관 없다는 것을 알 것이다.

    def PUSH(self,num): # num이라는 정수를 전달받아 스택에 넣어주는 함수이다.

        # 일단 값의 삽입 이전에 배열이 가득 차있는지 확인해야 한다.

        if self.top==self.maxsize-1: # 배열의 크기는 maxsize이므로 마지막 값이 위치하는 값은 maxsize-1이다.
                                     # top이 maxsize-1을 가르킨다면 값이 모두 차있다는 것을 의미하게 된다.
                
            print('스택이 가득 차있습니다')

        
        else: # 만일 가득 차지 않았다면

            # 맨 처음의 경우 top은 -1을 가르키고 있다. 이제 값이 추가될 것이고 항상 top은 맨 위의 값을 가르켜야 한다.
            # 그러므로 배열에 첫 원소가 삽입되면 top을 +1 시켜주고 그 위치에 값을 넣어주면 된다.
            # arr[0]=num이 될 것이고 top의 값은 0이 될 것이다.

            # top의 경우 기존의 위치, top+1 은 넣어줘야 할 위치를 가르킨다.

            self.top+=1 # 값이 들어왔으므로 top은 +1
            self.arr[self.top]=num # top위치에 전달받은 num값 저장


    def POP(self): # PUSH의 경우 값을 전달받아야 했지만 POP의 경우 맨 위의 값을 제거 한뒤 반대로 전달해준다.

        # 일단 값을 삭제하기 위해서는 배열이 비어있지 않아야 한다.

        if self.top==-1: # 배열이 비어있다면 top의 값은 -1

            print('스택이 비어있습니다')

        else: # 만일 비어있지 않다면

            # 앞선 경우는 top+1이 넣어줘야 하는 위치이므로 top+=1이 먼저였지만 삭제의 경우 top의 위치에서 뺀 뒤 top의 위치를 -1시켜준다.
            # 기존의 top을 삭제되고 top-1의 값이 새로운 top이 되어야 하므로 top의 위치를 -1 해주는 것이다.

            value=self.arr[self.top] # 맨 위의 값을 value라는 변수에 저장
            self.top-=1 # 맨 위의 값에 제거되었으므로 top의 값은 -1
            return value
            # 순서를 잘 파악하자. top에서 -1을 먼저 하고 value에 넣으면 top의 위치의 값이 아닌 top-1의 위치의 값이 들어간다.
            # top의 위치의 값을 먼저 반환한다면(return) 함수가 종료되므로 top-=1이 실행되지 않는다.
            # 그러므로 top의 위치의 값을 저장해 놓고 top에서 1을 빼준 뒤 그 값을 반환해주면 된다.


    def PEEK(self): # top에 해당하는 데이터를 읽는 함수, POP과 달리 값의 삭제가 이루어지지는 않는다.

        # POP과 마찬가지로 스택이 비어있다면 top에 해당하는 데이터가 없다.

        if self.top==-1:
            print('스택이 비어있습니다')
        else:
            return self.arr[self.top] # 배열의 top 위치에 존재하는 값 반환 그러나 top 값에는 변화를 주지 않음

    def SHOW(self): # STACK이 어떤식으로 작동하는지 확인하기 위해 만들어본 함수, 원래 존재하는 특징은 아니다.
        for i in range(self.top+1): # 배열의 n번째 까지 출력하기 위해서는 n+1 그러므로 top까지 출력하기 위해서는 top+1
            print(self.arr[i],end=' ')
        print()
            

stack=STACK(5) # 크기가 5인 스택

for i in range(6): # 0,1,2,3,4,5,6 순서대로 스택에 삽입
    print('삽입하려는 값',i)
    stack.PUSH(i)
    print('현재 스택 :',end=' ')
    stack.SHOW()

print('top에 존재하는 값',stack.PEEK()) # PEEK을 통해 맨 위의 값을 삭제하지 않고 얻어옴
print('현재 스택 :',end=' ')
stack.SHOW()

for i in range(6): # POP 6번 실시
    topvalue=stack.POP()
    print('top에 있던 값',topvalue)
    print('현재 스택 :',end=' ')
    stack.SHOW()

class QUEUE:

    def __init__(self,maxsize):
        self.maxsize=maxsize # 최대 크기 저장

        # 스택의 경우 스택 맨 위에서 값의 삽입과 삭제가 모두 일어났으므로 그 위치만 표시해주면 된다.
        # 그러나 큐의 경우 앞에서는 값의 삭제 뒤에서는 값의 삽입이 일어나므로 맨 앞과 맨 뒤 이렇게 두 곳을 나타내야 한다.
        
        self.front=-1 # 맨 앞을 나타내는 변수 , 해당 위치에서 값의 삭제가 이루어진다.
        self.rear=-1 # 맨 뒤를 나타내는 변수 , 해당 위치에서는 값의 삽입이 이루어진다.
        # 큐에서는 front와 rear 모두 값의 증가만 이루어진다. 맨 뒤에서 값의 삭제와 맨 앞에서의 값의 삽입이 이루어지지 않으므로,

        self.arr=[0]*self.maxsize # 값을 저장해줄 배열

    def ENQUEUE(self,num): # 값을 전달받아 큐에 값을 삽입하는 함수

        # 큐에 값의 삽입이 이루어질 때 rear의 값이 증가한다.
        # 맨 앞 (front)에서는 값의 삭제 rear에서는 값의 삽입이 이루어진다.

        # 최대 크기보다 크면 값의 삽입이 불가능해야 한다. 큐의 크기는 rear - front를 통해 알 수 있다. 
        if self.rear-self.front==self.maxsize:
            print('큐가 가득 찼습니다')
        else:
            self.rear+=1 # 위치의 이동이 먼저 이루어지고 값이 저장된다. 이렇게 하면 rear는 항상 값이 맨 뒤의 값을 가르키게 된다.
            self.arr[self.rear]=num # 전달받은 값 저장
        
        
    def DEQUEUE(self): # 맨 앞의 값을 삭제하고 그 값을 반환해주는 함수

        # 큐에 값의 삭제가 이루어질때 front의 값이 증가한다.
        # front는 항상 맨 앞의 값의 위치 - 1 의 값을 갖는다.

        # 만약 rear과 front의 값이 같은 경우 큐의 크기는 0, 즉 큐가 비어있다
        if self.rear-self.front==0:
            print('큐가 비어있습니다')
        else:
            self.front+=1 # 위치의 이동이 먼저 이루어진다. 이동한 위치에는 큐의 맨 앞의 값이 존재한다.
            return self.arr[self.front]

    def PEEK(self): # 큐의 맨 앞의 값을 반환, 값의 삭제는 이루어지지 않는다.

        if self.rear-self.front==0: # 큐가 비어있다면 맨 앞의 값도 존재하지 않는다
            print('큐가 비어있습니다')
        else:
            return self.arr[self.front+1] # 앞서 설명하였듯이 self.front는 항상 맨 앞의 값 위치 - 1의 값을 가진다. 따라서 +1한 값은 맨 앞의 값

    def SHOW(self): # 큐에 들어있는 원소를 앞에서부터 출력해주는 코드
        
        for i in range(self.front+1,self.rear+1): # self.front는 맨앞의 값 위치 - 1이므로 맨 앞에서 부터 출력해주기 위해서 +1
                                                 # self.end는 맨뒤의 값 위치, 그 위치까지 출력하기 위해서는 +1을 해줘야 하므로 +1 해주었다.
            print(self.arr[i],end=' ')
        print()

queue=QUEUE(5)
for i in range(6):
    print('큐에 넣으려는 값',i)
    queue.ENQUEUE(i)
    print('현재 큐 :',end=' ')
    queue.SHOW()

print('큐의 맨 앞에 존재하는 값 :',queue.PEEK())
print('현재 큐 :',end=' ')
queue.SHOW()

for i in range(6):
    frontvalue=queue.DEQUEUE()
    print('큐의 맨 앞에 있던 값',frontvalue)
    print('현재 큐 :',end=' ')
    queue.SHOW()

# 해당 부분에서 문제가 발생한다.
'''
print('큐에 넣으려는 값',10)
queue.ENQUEUE(10)
'''
# 위에 구현한 큐는 '선형 큐' 이고 선형 큐가 갖는 문제점이다.
# 큐는 비어있지만 이미 front와 rear의 값은 끝에 도달해있다. 이 상태에서 큐에 값을 삽입하려 하면 rear의 값이 배열 밖으로 벗어나게 되서 에러가 발생한다.
# 큐를 채워넣은 크기 (rear-front)는 최대 크기(maxsize)보다 작지만 값의 삽입이 불가능해졌다.
# 이를 해결하기 위해서 원형 큐를 이용하면 된다.


class CIRCULAR_QUEUE:

    # 원형 큐
    # 원형 큐에서는 만약 front가 이동하여 앞에는 빈 공간이 생기고 rear은 맨 끝에 도달한 상태에서 값의 추가가 일어나면 rear을 다시 맨 처음으로 돌려보낸다.
    # 선형 큐와 달리 이미 지나간 공간을 다시 활용할 수 있다.
    # 간단하게 %(나머지)를 이용해 구현 가능하다. 배열의 크기로 나눈 나머지는 최대크기를 이상의 값을 가질수 없다.
    # rear과 front의 값을 최대크기의 값으로 나눠주면 최대 크기의 값이 m이라 했을 때 다음과 증가한다.
    # rear의 값 기준 : m-2 -> m-1 -> 0 -> 1 ... -> m-2 -> m-1 -> 0 -> 1 ... (무한 반복)

    def __init__(self,maxsize):
        self.maxsize=maxsize # 최대 크기 저장

        # 스택의 경우 스택 맨 위에서 값의 삽입과 삭제가 모두 일어났으므로 그 위치만 표시해주면 된다.
        # 그러나 큐의 경우 앞에서는 값의 삭제 뒤에서는 값의 삽입이 일어나므로 맨 앞과 맨 뒤 이렇게 두 곳을 나타내야 한다.
        
        self.front=-1 # 맨 앞을 나타내는 변수 , 해당 위치에서 값의 삭제가 이루어진다.
        self.rear=-1 # 맨 뒤를 나타내는 변수 , 해당 위치에서는 값의 삽입이 이루어진다.
        # 큐에서는 front와 rear 모두 값의 증가만 이루어진다. 맨 뒤에서 값의 삭제와 맨 앞에서의 값의 삽입이 이루어지지 않으므로,

        self.arr=[0]*self.maxsize # 값을 저장해줄 배열

    def ENQUEUE(self,num): # 값을 전달받아 큐에 값을 삽입하는 함수

        # 큐에 값의 삽입이 이루어질 때 rear의 값이 증가한다.
        # 맨 앞 (front)에서는 값의 삭제 rear에서는 값의 삽입이 이루어진다.

        # 최대 크기보다 크면 값의 삽입이 불가능해야 한다. 큐의 크기는 rear - front를 통해 알 수 있다. 
        if self.rear-self.front==self.maxsize:
            print('큐가 가득 찼습니다')
        else:
            self.rear+=1 # 위치의 이동이 먼저 이루어지고 값이 저장된다. 이렇게 하면 rear는 항상 값이 맨 뒤의 값을 가르키게 된다.
            self.arr[self.rear%self.maxsize]=num # 전달받은 값 저장
        
        
    def DEQUEUE(self): # 맨 앞의 값을 삭제하고 그 값을 반환해주는 함수

        # 큐에 값의 삭제가 이루어질때 front의 값이 증가한다.
        # front는 항상 맨 앞의 값의 위치 - 1 의 값을 갖는다.

        # 만약 rear과 front의 값이 같은 경우 큐의 크기는 0, 즉 큐가 비어있다
        if self.rear-self.front==0:
            print('큐가 비어있습니다')
        else:
            self.front+=1 # 위치의 이동이 먼저 이루어진다. 이동한 위치에는 큐의 맨 앞의 값이 존재한다.
            return self.arr[self.front%self.maxsize]

    def PEEK(self): # 큐의 맨 앞의 값을 반환, 값의 삭제는 이루어지지 않는다.

        if self.rear-self.front==0: # 큐가 비어있다면 맨 앞의 값도 존재하지 않는다
            print('큐가 비어있습니다')
        else:
            return self.arr[(self.front+1)%self.maxsize] # 앞서 설명하였듯이 self.front는 항상 맨 앞의 값 위치 - 1의 값을 가진다. 따라서 +1한 값은 맨 앞의 값

    def SHOW(self): # 큐에 들어있는 원소를 앞에서부터 출력해주는 코드
        
        for i in range(self.front+1,self.rear+1): # self.front는 맨앞의 값 위치 - 1이므로 맨 앞에서 부터 출력해주기 위해서 +1
                                                 # self.end는 맨뒤의 값 위치, 그 위치까지 출력하기 위해서는 +1을 해줘야 하므로 +1 해주었다.
            print(self.arr[i%self.maxsize],end=' ')
        print()


c_queue=CIRCULAR_QUEUE(5)
for i in range(6):
    print('큐에 넣으려는 값',i)
    c_queue.ENQUEUE(i)
    print('현재 큐 :',end=' ')
    c_queue.SHOW()

print('큐의 맨 앞에 존재하는 값 :',c_queue.PEEK())
print('현재 큐 :',end=' ')
c_queue.SHOW()

for i in range(6):
    frontvalue=c_queue.DEQUEUE()
    print('큐의 맨 앞에 있던 값',frontvalue)
    print('현재 큐 :',end=' ')
    c_queue.SHOW()

# 해당 부분에서 문제가 발생한다.

print('큐에 넣으려는 값',10)
c_queue.ENQUEUE(10)
print('현재 큐 :',end=' ')
c_queue.SHOW()

# 랜덤으로 수를 정하고 홀수면 삭제 짝수면 삽입하는 것을 100번 반복해주는 코드.
from random import randint
for i in range(100):
    random_number=randint(0,100)
    if random_number%2==1:
        print('큐에 넣으려는 값',random_number)
        c_queue.ENQUEUE(random_number)
    else:
        frontvalue=c_queue.DEQUEUE()
        print('큐의 맨 앞에 있던 값',frontvalue)
    print('현재 큐 :',end=' ')
    c_queue.SHOW()

# 아주 잘 실행된다.


