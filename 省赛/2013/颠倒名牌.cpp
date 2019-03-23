/*
标题: 颠倒的价牌


    小李的店里专卖其它店中下架的样品电视
	机，可称为：样品电视专卖店。

    其标价都是4位数字（即千元不等）。

    小李为了标价清晰、方便，使用了预制的
	类似数码管的标价签，只要用
	颜色笔涂数字就可以了（参见p1.jpg）。

    这种价牌有个特点，对一些数字，倒过来
	看也是合理的数字。如：1 2 5 6 8 9 0 
	都可以。这样一来，如果牌子挂倒了，有
	可能完全变成了另一个价格，
	比如：1958 倒着挂就是：8561，差了几千
	元啊!! 

    当然，多数情况不能倒读，比如，1110 就
	不能倒过来，因为0不能作为开始数字。

    有一天，悲剧终于发生了。某个店员不小心
	把店里的某两个价格牌给挂倒了。
	并且这两个价格牌的电视机都卖出去了!

    庆幸的是价格出入不大，其中一个价牌赔了2
	百多，另一个价牌却赚了8百多，
	综合起来，反而多赚了558元。

    请根据这些信息计算：赔钱的那个价牌正确
	的价格应该是多少？


答案是一个4位的整数，请通过浏览器直接提交
该数字。
注意：不要提交解答过程，或其它辅助说明类
的内容。

*/ 
#include<iostream>
#include<sstream>
using namespace std;
void i2s(int num,string &str){
	stringstream sstr;
	sstr<<num;
	sstr>>str; 
}
bool isud(int x){
	string str;
	i2s(x,str);
	if(str[3]=='0'){
		return false;
	}
	for(int i=3;i>=0;i--){
		switch(str[i]){
			case '3':
			case '4':
			case '7':
				return false;
		}
	}
	return true;
} 
void s2i(string str,int &num){
	stringstream sstr;
	sstr<<str;
	sstr>>num;
}

int ud(int x){
	string str;
	int num;
	i2s(x,str);
	string tr="0000";
	for(int i=0;i<4;i++){
		if(str[i]=='6'){
			tr[3-i]='9';
		}
		else if(str[i]=='9'){
			tr[3-i]='6';
		}
		else{
			tr[3-i]=str[i];
		}
	}
	s2i(tr,num);
	return num;
}


typedef struct{
	int pd,op,pp;
}jh;
int main(){
	jh ten[10000],tep[10000];
	int n=0,p=0;
	
	for(int i=1001;i<=9999;i++){
		if(isud(i)){
			int j=ud(i)-i;
			if(j<=-200&&j>=-299){
				ten[n].pd=j;
				ten[n].op=i;
				ten[n].pp=ud(i);
				n++;
			}
			else if(j>=800&&j<=899){
				tep[p].pd=j;
				tep[p].op=i;
				tep[p].pp=ud(i);
				p++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			if(ten[i].pd+tep[j].pd==558){
				cout<<ten[i].op<<" "<<tep[j].op<<endl;
			}
		}
	}

	return 0;
}

