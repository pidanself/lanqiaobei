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
bool isrun(int y){
	if(y%4==0&&y%100!=0||y%400==0){
		return true;
	}
	return false;
}
void cal(int &y,int &m,int &d,int to){
	if(to==0)return;
	d++;
	if(m==1||m==3||m==5||m==7||m==8||m==10||m==12){
		if(d==32&&m==12){
			d=1;
			m=1;
			y++;
		}
		else if(d==32){
			d=1;
			m++;
		}	
	}
	else if(m==4||m==6||m==9||m==11){
		if(d==31){
			m++;
			d=1;
		}
	}
	else{
		if(isrun(y)){
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
	}
	cal(y,m,d,to-1);
	
}

int main(){

	int y=2014,m=11,d=9;
	cal(y,m,d,1000);
	cout<<y<<","<<m<<" "<<d;

	return 0;
}

