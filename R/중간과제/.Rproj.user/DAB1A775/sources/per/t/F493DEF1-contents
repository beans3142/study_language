diamond<-read.csv("./data/diamond.csv",header=FALSE,na.strings=c("."))
nrow(diamond)
colnames(diamond)
freq<-table(diamond$V2)
freq
prop_freq<-prop.table(freq)
prop_freq
carat<-as.numeric(diamond$V2[2:49])
cut_value<-cut(carat,breaks=seq(0.1,0.35,by=0.05))
cut_table<-table(cut_value)
cut_table
prop_cut_table<-prop.table(cut_table)
prop_cut_table
ans1<-matrix(ncol =2,nrow=5,data=c(cut_table,prop_cut_table),dimnames=list(rownames(cut_table),c("도수","상대도수")))
ans1

Mi<-c(0.125,0.175,0.225,0.275,0.325)
fi<-cbind(cut_table)
Mi_mul_fi<-Mi*fi
Ex<-sum(Mi_mul_fi)/48
Mi_minus_Ex_pow<-(Mi-Ex)^2
fi_mul_Mi_minus_Ex_pow<-fi*Mi_minus_Ex_pow
Vx<-sum(fi_mul_Mi_minus_Ex_pow)/(nrow(diamond)-1)
ans2<-cbind("Mi"=c(Mi,sum(Mi)), "fi"=c(fi,sum(fi)), "Mi*fi"=c(Mi_mul_fi,sum(Mi_mul_fi)), "(Mi-Ex)^2"=c(Mi_minus_Ex_pow,sum(Mi_minus_Ex_pow)), "fi*(Mi-Ex)^2"=c(fi_mul_Mi_minus_Ex_pow,sum(fi_mul_Mi_minus_Ex_pow)))
rownames(ans2)<-c(rownames(cut_table),"합계")
ans2
# Vx = 분산 Ex = 표본평균

ans3<-hist(carat,col="gold")
ans3
# 양의 외도이다 

#freq_price<-table(diamond$V3)
#freq_price
#prop_freq_price<-prop.table(freq_price)
#prop_freq_price
price<-as.numeric(diamond$V3[2:49])
ans4<-hist(price,breaks=seq(200,1100,by=100))

ans5<-stem(carat,scale=0.3)
carat

ans6<-boxplot(price)

ans7<-plot(price,carat)
# 양의 선형 관계, 가격이 비싸면 크기도 커진다. 

