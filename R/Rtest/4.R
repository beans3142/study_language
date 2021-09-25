#1)
#name<-c("kim","kang","lee")
#c1<-c(90,85,69)
#c2<-c(44,85,96)
#c3<-c(49,96,90)
#score<-data.frame(eng=c1,math=c2,gym=c3,row.names=name)
#score$eng[1]+score[[3]][3]

#2)
#score<-matrix(c(90,85,69,77,85,96,49,96,90,80,70,60),4,3)
#score[,1]

#3)
#c<-c('park','kang','kim')
#d<-c(90,50,70)
#x1<-list(firstn=c,score=d)
#x1[[1]][2]
#x1[['firstn']][2]
#x1$firstn[2]
#x1[[1]][2]==x1[['firstn']][2]==x1$firstn[2]

#4)
#name<-c("kim","kang","lee")
#c1<-c(90,85,69)
#c2<-c(44,85,96)
#c3<-c(49,96,90)
#score<-data.frame(eng=c1,math=c2,gym=c3,row.names=name)
#length(score)

#5)
#score<-matrix(c(90,85,69,77,85,96,49,96,90,80,70,60),4,3)
#rownames(score)<-c("kim","kang","lee","park")
#colnames(score)<-c("영어","수학","과학")
#score[4,2:3]
#score[4,-1]
#score['park',c("수학","과학")]
#score["park",score[4,]%%2==0]
#score[4,-c(2,3)]
