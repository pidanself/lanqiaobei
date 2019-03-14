/*

标题：斐波那契

    斐波那契数列大家都非常熟悉。
	它的定义是：

f(x) = 1                    .... (x=1,2)
f(x) = f(x-1) + f(x-2)      .... (x>2)

    对于给定的整数 n 和 m，我们希望求出：
    f(1) + f(2) + ... + f(n)  的值。
	但这个值可能非常大，所以我们把它
	对 f(m) 取模。
    公式参见【图1.png】

    但这个数字依然很大，所以需要再对 
	p 求模。

【数据格式】
输入为一行用空格分开的整
数 n m p (0 < n, m, p < 10^18)
输出为1个整数

例如，如果输入：
2 3 5
程序应该输出：
0

再例如，输入：
15 11 29
程序应该输出：
25

资源约定：
峰值内存消耗 < 256M
CPU消耗  < 1000ms


请严格按要求输出，不要画蛇添足地打印类
似：“请您输入...” 的多余内容。

所有代码放在同一个源文件中，调试通过后，
拷贝提交该源码。

注意: main函数需要返回0
注意: 只使用ANSI C/ANSI C++ 标准，不要
调用依赖于编译环境或操作系统的特殊函数。
注意: 所有依赖的函数必须明确地在源文件
中 #include <xxx>， 不能通过工程设置而省
略常用头文件。


提交时，注意选择所期望的编译器类型。
*/ 
#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
typedef unsigned long long ll;

int main(){
	ll n,m,mod,ans=0;
	ll f_m=0,f_n=0;
	cin>>n>>m>>mod;
	ll a=1,b=1,t;
	if(m>=n+2){
		
		for(ll i=3;i<=n+2;i++){
			t=b;
			b=a+b;
			a=t;
		}
		f_n=b;
		ans=f_n%mod-1;
	}
	else{
		for(ll i=3;i<=n+2;i++){
			t=b;
			b=a+b;
			a=t;
			if(i==m){
				f_m=b;
			}
		}
		f_n=b;
		ans=f_n%f_m%mod-1;
	}
	
	cout<<ans;
	return 0;
}

