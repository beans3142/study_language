def make_movie():
    print("영화를 제작하였습니다.")

def enter(money, time):
    print("영화관에 {}원을 주고 {}번 입장하였습니다.".format(money, time))
    return money+time

money = 0
money = enter(money, 1000)
print(money)

