jumin =input("주민번호 입력 : ").split('-')

if jumin[1][0]==1 or 3:
    print("성별은 남자")
else:
    print("성별은 여자")

year = int(jumin[0][0:2])
month = jumin[0][2:4]
date = jumin[0][4:6]

if year in range(0,22):
    print("20{0:02d}년 {1}월 {2}일 출생".format(year,month,date))
else:
    print("19{0}년 {1}월 {2}일 출생".format(year,month,date))

    
