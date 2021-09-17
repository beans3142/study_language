import random
import time

parts = ["고추","고추털","겨털","똥꼬털","콧구멍","부랄"]
단위=["mm","cm","m","km","광년"]

def 길이(*person):
    print("{0}의 {1}의 길이는 {2}{3}입니다.".format(random.choice(person),random.choice(parts),random.randint(-100000000,100000000),random.choice(단위)))

for i in range (0,1000):
    time.sleep(2)
    길이("추윤","배민규","정대훈")
