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
#include<math.h>
#include<cstring>
using namespace std;
int mem[10]={0}; 
int comcnt(int i,int j,int k){
	return (int)log10(i)+(int)log10(j)+(int)log10(k)+3;
}
int comcnt(int i){
	return (int)log10(i)+1;
}

bool isrepeat(int i){
	int cnt=comcnt(i);
	for(int j=0;j<cnt;j++){
		int c=i%10;
		i=i/10;
		if(mem[c]==0){
			mem[c]=1;
		}
		else{
			return true;
		}
	}
	return false;
	
}
int main(){
	int num,ans=0;
	mem[0]=1;
	cin>>num;
	for(int i=1;i<num;i++){
		for(int j=1;;j++){
			memset(mem,0,sizeof(mem));
			mem[0]=1;
			int k=(num-i)*j;
			int cnt=comcnt(i,j,k);
			if(cnt>9) break;
			if(cnt<9) continue;
			if(isrepeat(i)||isrepeat(j)||isrepeat(k)) continue;
			
			ans++;
		}
	}
	cout<<ans;

	return 0;
}

