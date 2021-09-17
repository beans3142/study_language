def profile(name,age=21,main_lang="자바"):
    print("이름 : {0}\n나이 : {1}\n주 사용 언어: {2}" \
          .format(name, age, main_lang))


'''
def profile(name,age,main_lang):
    print("이름 : {0}\n나이 : {1}\n주 사용 언어: {2}" \
          .format(name, age, main_lang))


name, age, main_lang=input(),input(),input()

profile(name,age,main_lang)
'''
profile("유완규", 20, "파이썬")

profile("추윤")
