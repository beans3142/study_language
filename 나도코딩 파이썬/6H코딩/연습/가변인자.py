def mult(*numb):
    sumnum=0
    for num in numb:
        print("{0}+".format(num),end=(" "))
        sumnum+=num
    print(sumnum,end=(" "))

mult(1,2,3,4,5,6,7,8,9,10)
