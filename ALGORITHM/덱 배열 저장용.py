from math import inf

class DOUBLE_ENDED_QUEUE:

    # DOUBLE_ENDED_QUEUE 줄여서 DEQUE 데크, 덱 

    def __init__(self,maxsize):
        self.maxsize=maxsize # 최대 크기 저장

        # 덱은 스택과 큐를 합친 것이라 생각하면 된다. 큐의 front와 rear에서 스택처럼 삽입과 삭제가 모두 이루어진다.
        # front와 rear의 값이 음수로 향할 수도 있다.
        
        self.front=inf # 맨 앞을 나타내는 변수 , 해당 위치에서 값의 삽입과 삭제가 모두 이루어진다.
        self.rear=inf # 맨 뒤를 나타내는 변수 , 해당 위치에서 값의 삽입과 삭제가 모두 이루어진다.

        # 큐에서는 front와 rear 모두 값의 증가만 이루어진다. 맨 뒤에서 값의 삭제와 맨 앞에서의 값의 삽입이 이루어지지 않으므로,

        self.arr=[0]*self.maxsize # 값을 저장해줄 배열

    # 우측에서의 삽입은 큐와 같다.
    def ENQUEUE(self,num): # 값을 전달받아 뒤에 값을 삽입하는 함수

        # 값의 삽입이 이루어질 때 rear의 값이 증가한다.

        # 최대 크기보다 크면 값의 삽입이 불가능해야 한다. 큐의 크기는 rear - front를 통해 알 수 있다.
        if abs(self.rear-self.front)==self.maxsize: # 절댓값 사용 front가 rear보다 커질 수도 있다.
            print('덱이 가득 찼습니다')
        else:
            if self.front==inf and self.rear==inf: # 값이 아직 들어오지 않은 경우
                self.front=0
                self.rear=0
            else:
                self.rear+=1 # 위치의 이동이 먼저 이루어지고 값이 저장된다. 이렇게 하면 rear는 항상 값이 맨 뒤의 값을 가르키게 된다.
            self.arr[self.rear%self.maxsize]=num # 전달받은 값 저장

    # 좌측에서의 삽입
    def ENQUEUE_LEFT(self,num):

        # 값의 삽입이 이루어질때 front의 값이 감소한다.
        # 값이 감소하다 0보다 작아질 수 있다. 그러나 파이썬의 경우 배열의 음수번째 위치는 뒤에서 해당 칸만큼의 값을 가르키므로 음수를 활용할 수 있다.
        # 다만 음수를 사용할 경우 나머지 계산시 원하는 값이 나오지 않을 수 있다. 양수는 크기가 8인 경우 0~7이지만 음수는 -8~-1이다. -9의 경우  원하는 값은 뒤에서 1번째 -1 이지만 나누는 경우 1이 나오게 되는 문제가 있다.
        # 해결하기 위한 여러 방법이 있겠지만 음수의 경우 (최대 크기 - (음수)%최대크기)% 최대크기 로 원하는 위치의 값으로 바꿀 수 있다.

        # 값의 삽입이 이루어질 때 rear의 값이 증가한다.

        # 최대 크기보다 크면 값의 삽입이 불가능해야 한다. 큐의 크기는 rear - front를 통해 알 수 있다.
        if abs(self.rear-self.front)==self.maxsize: # 절댓값 사용 front가 rear보다 커질 수도 있다.
            print('덱이 가득 찼습니다')
        else:
            if self.front==inf and self.rear==inf: # 값이 아직 들어오지 않은 경우
                self.front=0
                self.rear=0
            else:
                self.front-=1
            self.arr[self.front]=num # 전달받은 값 저장
        
    
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
