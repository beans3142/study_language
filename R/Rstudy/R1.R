col1<-c(9,12,NA,2,10,5)

col2<-c(13,7,4,3,14,NA)

data<-data.frame(col1,col2)



a<-na.omit(data)

b<-data[complete.cases(data),]

c<-data[rowSums(is.na(data))==0,]

d<-data[complete.cases(data)==0,]

e<-data[(is.na(data$col1)==F)& (is.na(data$col2)==F),]

mean(c(5,7,5,3,4,6))
mean(c(8,12,9,2,10,13))
var(c(5,7,5,3,4,6))
var(c(8,12,9,2,10,13))
2^0.5/5
15.2^0.5/9

a<-c(9,12,9,2,10,5,13,7,4,3,4,14)

idx.a <-(length(a)+1)/2

a.srt <- sort(a)

answer<-(a.srt[ idx.a -0.5 ]+a.srt[ idx.a +0.5 ])/2

answer

