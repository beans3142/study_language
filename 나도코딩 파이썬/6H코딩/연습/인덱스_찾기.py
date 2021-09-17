a=str(input("아무거나입력"))

for i in range(len(a)):
    n=a.index("s",i)
    if n is int:
        print(int(n+1),"번째에 s가 있다")

