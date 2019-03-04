/*

标题：带分数

    100 可以表示为带分数的形
	式：100 = 3 + 69258 / 714

    还可以表示为：100 = 82 + 3546 / 197

    注意特征：带分数中，数字1~9分
	别出现且只出现一次（不包含0）。

    类似这样的带分数，100 有 11 
	种表示法。

题目要求：
从标准输入读入一个正整数N (N<1000*1000)
程序输出该数字用数码1~9不重复不遗
漏地组成带分数表示的全部种数。
注意：不要求输出每个表示，只统计有
多少表示法！


例如：
用户输入：
100
程序输出：
11

再例如：
用户输入：
105
程序输出：
6


资源约定：
峰值内存消耗 < 64M
CPU消耗  < 3000ms


请严格按要求输出，不要画蛇添足地打印
类似：“请您输入...” 的多余内容。

所有代码放在同一个源文件中，调试通过
后，拷贝提交该源码。

注意: main函数需要返回0
注意: 只使用ANSI C/ANSI C++ 标准，不
要调用依赖于编译环境或操作系统的特殊函数。
注意: 所有依赖的函数必须明确地在源文件
中 #include <xxx>， 不能通过工程设置
而省略常用头文件。

提交时，注意选择所期望的编译器类型。
*/
#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int ans=0;

//void s2i(string s,double &i){
//	stringstream sstr;
//	sstr<<s;
//	sstr>>i;
//}
//bool check(string s,int num){
//	int ad=s.find('+');
//	int mi=s.find('/');
//	if(s.find('/')>s.find('+')){
//		if(s.find('/')>=3&&s.find('/')<=9){
//			if(s.find('+')>=1&&s.find('+')<=7){
//				string a,b,c;
//				double q,w,e;
//				a=s.substr(0,ad);
//				b=s.substr(ad+1,mi-ad-1);
//				c=s.substr(mi+1,10-mi);
//				s2i(a,q);
//				s2i(b,w);
//				s2i(c,e);
//				double numm=q+w/e;
//				
//				if(numm==num){
//					//printf("%lf+%lf/%lf=%lf",q,w,e,numm);
//					//cout<<endl;
//					return true;
//				}
//			}
//		}
//	}
//	return false;
//	
//}
int parse(string str,int begin,int num){
	int o;
	string s=str.substr(begin,num);
	stringstream sstr;
	sstr<<s;
	sstr>>o;
	return o;
}
int main(){
	int num,fu=0;
	cin>>num;
	string s="123456789";
	do{
		for(int i=1;i<=7;i++){
			int a=parse(s,0,i);
			if(a>=num) break;
			for(int j=1;j<=9-i-1;j++){
				int b=parse(s,i,j);
				int c=parse(s,i+j,9-i-j);
				fu++;
				if(b%c==0&&(a+b/c)==num){
					ans++;
				}
			}
		}
	}while(next_permutation(s.begin(),s.end()));
	cout<<fu;
	return 0;
}

