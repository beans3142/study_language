a=input("대충입력 : ").split()

for i in range(len(a)):
    print('\n',a[i],'\n')
    for j in range(len(a[i])):
        print(a[i][j])
