a = input("아무 문장이나 입력해라 : ").split()
cap=0

print(len(a))

for i in range(len(a)):
    for j in range(len(a[i])):
        if a[i][j].isupper() == True:
            cap+=1
            print("{}번째 부분에 {}번째 철자가 {}번째 대문자다".format(i+1,j+1,cap))


print(cap)
