def std_weight(height,gender):
    if gender == "남자":
        weight=(height/100)**2*22
        print("키 {0}cm 남자의 표준 체중은 {1:0.2f} 입니다.".format(height,weight))
    elif gender == "여자":
        weight=(height/100)**2*21
        print("키 {0}cm 여자의 표준 체중은 {1:0.2f} 입니다.".format(height,weight))

std_weight(175,"남자")
