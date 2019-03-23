/*
星系炸弹

在X星系的广袤空间中漂浮着许多
X星人造“炸弹”，用来作为宇宙中的路标。
每个炸弹都可以设定多少天之后爆炸。
比如：阿尔法炸弹2015年1月1日放
置，定时为15天，则它在2015年1月16日爆炸。
有一个贝塔炸弹，2014年11月9日放置，
定时为1000天，请你计算它爆炸的准确日期。

请填写该日期，格式为 yyyy-mm-dd  
即4位年份2位月份2位日期。比如：2015-02-19
请严格按照格式书写。不能出现其它文字或符号。
*/
#include<iostream>
using namespace std;

bool yeap(int y){
	if(y%4==0&&y%100!=0||y%400==0){
		return true;
	}
	return false;
}

void com(int &y,int &m,int &d,int num){
	for(int i=1;i<=num;i++){
		d++;
		switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if(d==32){
				m++;d=1;
					
			}
			break;
		case 12:
			if(d==32){
				m=1;d=1;y++;
					
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(d==31){
				m++;d=1;
					
			}
			break;
		case 2:
			if(yeap(y)){
				if(d==30){
					m++;
					d=1;
				
				}
			}
			else{
				if(d==29){
					m++;
					d=1;
				
				}
			}
			break;
	}
	}
	
	
	
}


int main(){
	int y=2014,m=11,d=9;
	cin>>y>>m>>d;
	int num;
	cin>>num;
	com(y,m,d,num);
	printf("%d,%d,%d",y,m,d); 
	return 0;
}

