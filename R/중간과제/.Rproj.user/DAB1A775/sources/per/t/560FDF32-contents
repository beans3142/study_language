rt<-read.csv("./data/reactiontime.csv",header=T)
rt
age_table<-table(rt$age)
gender_table<-table(rt$gender)
time_table<-table(rt$time)
ans1<-barplot(age_table)

ans2<-pie(gender_table)

control_table<-table(rt$control)
control_table
ans3_1<-pie(control_table)
ans3_2<-barplot(control_table)

# ans4
table(rt$age,rt$control)
s# 1) 높다
# 16~24 20 : 80
# 25+ 40 : 60
# 2) 높다
table(rt$gender,rt$control)
# 3) 많다

timeT<-rt[rt$control=="T",]$time
timeT
timeC<-rt[rt$control=="C",]$time
timeC
boxplot(timeT,timeC,names=c("전화 O","전화 X"))
# ans5 = T ( 통화중인 사람이 반응까지 걸리는 시간이 더 김)

timeM<-rt[rt$gender=="M",]$time
timeF<-rt[rt$gender=="F",]$time
boxplot(timeM,timeF,names=c("남자","여자"))
# ans6 = 길다
# 여성 운전자가 반응하기 까지 걸리는 시간이 남자보다 조금 더 길다.

timeYoung<-rt[rt$age=="16-24",]$time
timeOld<-rt[rt$age=="25+",]$time
boxplot(timeYoung,timeOld,names=c("16-24","25+"))
# ans7 = 길다

young<-rt[rt$age=="16-24",]
old<-rt[rt$age=="25+",]
youngM<-young[young$gender=="M",]$time
youngF<-young[young$gender=="F",]$time
oldM<-old[old$gender=="M",]$time
oldF<-old[old$gender=="F",]$time
boxplot(youngM,youngF,oldM,oldF,names=c("16-24 M","16-24 F","25+ M","25+ F"))
# ans8
# 1) 길다
# 2) 여성

