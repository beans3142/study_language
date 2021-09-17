a=str(input("사이트 주소를 입력하세요 : "))
'''
a=a.replace("https://","")
a=a.replace(".com","")
'''
a=a[a.index("//")+2:a.find(".")]
'''
print('{0}{1}{2}!'.format(a[:3],len(a),a.count('e')))
'''
print(str(a[:3])+str(len(a))+str(a.count('e'))+'!')
