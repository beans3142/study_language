'''
score_file = open("score.txt","w", encoding="utf8")
print("이름 : 배민규", file=score_file)
print("데미지 : 10000", file=score_file)
score_file.close()
'''

# ^^^  열고 쓰기 ^^^ w = 덮어쓰기

'''
score_file=open("score.txt","a",encoding="utf8")
#print("이름 : 배민규", file=score_file)
#print("데미지 : 10000", file=score_file)
score_file.write("이름 : 배민규")
score_file.write("\n데미지 : 10000")
score_file.close()
'''

#a = append

'''
score_file=open("score.txt","r",encoding="utf8")
print(score_file.read())
score_file.close()
'''

#r = read

'''
score_file=open("score.txt","r",encoding="utf8")
print(score_file.readline(),end=(''))
print(score_file.readline(),end=(''))
score_file.close()
'''

#readline()=한줄읽고\n까
