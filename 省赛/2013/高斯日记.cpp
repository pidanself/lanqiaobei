/*

题目标题: 高斯日记

    大数学家高斯有个好习惯：无论如何都要记日记。

    他的日记有个与众不同的地方，他从不注明年月日，
	而是用一个整数代替，比如：4210

    后来人们知道，那个整数就是日期，它表示那一天是
	高斯出生后的第几天。这或许也是个好习惯，它时时
	刻刻提醒着主人：日子又过去一天，还有多少时光可
	以用于浪费呢？

    高斯出生于：1777年4月30日。

    在高斯发现的一个重要定理的日记上标注着：5343，
	因此可算出那天是：1791年12月15日。

    高斯获得博士学位的那天日记上标着：8113

    请你算出高斯获得博士学位的年月日。

提交答案的格式是：yyyy-mm-dd, 例如：1980-03-21

请严格按照格式，通过浏览器提交答案。
注意：只提交这个日期，不要写其它附加内容，比如：说明性的文字。

1799-07-16
*/

#include<iostream>
using namespace std;
bool isLeapYear(int y){
	if(y%4==0&&y%100!=0){
		return true;
	}
	else if(y%400==0){
		return true;
	}
	return false;
}

void com(int &y,int &m,int &d,int sum){
	for(int i=1;i<sum;i++){
		d++;
		if((m==1||m==3||m==5||m==7||m==8||m==10)&&d==32){
			d=1;
			m++;
		}
		else if((m==4||m==6||m==9||m==11)&&d==31){
			d=1;
			m++;
		}
		else if(m==12&&d==32){
			y++;
			m=1;
			d=1;
		}
		else if(m==2&&isLeapYear(y)&&d==30){
			d=1;
			m++;
		}
		else if(m==2&&!isLeapYear(y)&&d==29){
			d=1;
			m++;
		}
	}
}
int main() {
	int s=8113;
	int by=1777,bm=4,bd=30;
	com(by,bm,bd,s);
	printf("今天是%d-%d-%d",by,bm,bd);
	
	return 0;
}

