
class STACK:
    def __init__(self,maxsize):
        self.maxsize=maxsize
        self.back=-1
        self.front
        self.stack=[0]*maxsize

    def PUT(self,num):
        if self.top==self.maxsize-1:
            print('스택이 가득 찼습니다 !')
        else:
            self.top+=1
            self.stack[self.top]=num
        print(f'STACK : {self.stack[:self.top+1]} <- TOP top의 값은 {self.top} 메모리 : STACK : {self.stack}')

    def POP(self):
        if self.top==-1:
            print('스택이 비어 있습니다 !')
        else:
            value=self.stack[self.top]
            self.top-=1
            print('값 제거',value,end=' ')
        print(f'STACK : {self.stack[:self.top+1]} <- TOP top의 값은 {self.top} 메모리 : STACK : {self.stack}')


st=STACK(5)
st.PUT(5)
st.PUT(6)
st.PUT(12)
st.PUT(4)
st.PUT(1)
st.PUT(5)
for i in range(6):
    st.POP()
