/*
answer:10
标题：猜年龄

    小明带两个妹妹参加元宵灯会。
	别人问她们多大了，她们调皮
	地说：“我们俩的年龄之积是
	年龄之和的6倍”。小明又补充
	说：“她们可不是双胞胎，年龄
	差肯定也不超过8岁啊。”

    请你写出：小明的较小的妹妹的年龄。


注意： 只写一个人的年龄数字，
请通过浏览器提交答案。不要书
写任何多余的内容。


*/ 
#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
	for(int i=0;i<100;i++){
		for(int j=0;j<100;j++){
			if(6*(i+j)==i*j){
				if(i!=j){
					if(abs(i-j)<=8){
						cout<<i<<" "<<j<<endl;
					}
				}
			}
		}
	}


	return 0;
}

