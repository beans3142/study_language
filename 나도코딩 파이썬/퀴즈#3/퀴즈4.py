class Word:
    def __init__(self,신조어,보기1,보기2,정답):
        self.신조어=신조어
        self.보기1=보기1
        self.보기2=보기2
        self.정답=정답
    def show_question(self):
        print('"{0}"의 뜻은?\n1.{1}\n2.{2}'\
              .format(self.신조어,self.보기1,self.보기2))
    def check_answer(self,answer):
        if answer==self.정답:
            print("정답입니다")
        else:
            print("틀렸습니다")

word=Word("얼죽아","얼어 죽어도 아메리카노","얼굴만은 죽어도 아기피부",1)
word.show_question()
word.check_answer(int(input('=> ')))
