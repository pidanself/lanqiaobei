/*
密码脱落

X星球的考古学家发现了一批古代留下来的密码。
这些密码是由A、B、C、D 四种植物的种
子串成的序列。
仔细分析发现，这些密码串当初应该是前
后对称的（也就是我们说的镜像串）。
由于年代久远，其中许多种子脱落了，因
而可能会失去镜像的特征。

你的任务是：
给定一个现在看到的密码串，计算一下从当
初的状态，它要至少脱落多少个种子，才可
能会变成现在的样子。

输入一行，表示现在看到的密码串（长度不大于1000）
要求输出一个正整数，表示至少脱落了多少个种子。

例如，输入：
ABCBA
则程序应该输出：
0

再例如，输入：
ABDCDCBABC

则程序应该输出：
3

资源约定：
峰值内存消耗 < 256M
CPU消耗  < 1000ms

请严格按要求输出，不要画蛇添足
地打印类似：“请您输入...” 的多余内容。

所有代码放在同一个源文件中，调
试通过后，拷贝提交该源码。

注意: main函数需要返回0
注意: 只使用ANSI C/ANSI C++ 标
准，不要调用依赖于编译环境或操作
系统的特殊函数。
注意: 所有依赖的函数必须明确地在
源文件中 #include <xxx>， 不能通
过工程设置而省略常用头文件。

提交时，注意选择所期望的编译器类型。
*/ 
#include<iostream>
using namespace std;

int dfs(string s,int i,int j,int cnt){
	if(i>=j){
		return cnt;
	}
	if(s[i]!=s[j]){
		return min(dfs(s,i+1,j,cnt+1),dfs(s,i,j-1,cnt+1));
		
	}
	else{
		return dfs(s,i+1,j-1,cnt);
	} 
}

int main(){

	string s;
	cin>>s;
	int len=s.length();
	
	int ans=dfs(s,0,len-1,0);
	cout<<ans;
	return 0;
}

