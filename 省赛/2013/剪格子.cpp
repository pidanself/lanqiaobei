/*
标题：剪格子

    如图p1.jpg所示，3 x 3 的格子中填写了一些整数。

    我们沿着图中的红色线剪开，得到两个部分，每个部
	分的数字和都是60。

    本题的要求就是请你编程判定：对给定的m x n 的
	格子中的整数，是否
	可以分割为两个部分，使得这两个区域的数字和相等。
    如果存在多种解答，请输出包含左上角格子的那个区
	域包含的格子的最小数目。   
    如果无法分割，则输出 0

程序输入输出格式要求：
程序先读入两个整数 m n 用空格分割 (m,n<10)
表示表格的宽度和高度
接下来是n行，每行m个正整数，用空格分开。每个整数不大于10000
程序输出：在所有解中，包含左上角的分割区可能包含的最小的格子数目。


例如：
用户输入：
3 3
10 1 52
20 30 1
1 2 3

则程序输出：
3

再例如：
用户输入：
4 3
1 1 1 1
1 30 80 2
1 1 1 100

则程序输出：
10

(参见p2.jpg)


资源约定：
峰值内存消耗 < 64M
CPU消耗  < 5000ms


请严格按要求输出，不要画蛇添足地打印类似："请您输入..." 的多余内容。

所有代码放在同一个源文件中，调试通过后，拷贝提交该源码。

注意: main函数需要返回0
注意: 只使用ANSI C/ANSI C++ 标准，不要调用依赖于编译环境或操作系统的特殊函数。
注意: 所有依赖的函数必须明确地在源文件中 #include <xxx>， 不能通过工程设置而省略常用头文件。

提交时，注意选择所期望的编译器类型。

*/ 
#include<iostream>
#include<cstring>
using namespace std;
int mem[10][10],g[10][10],ge;
int ans=100,mid=0;
int r,c;

void dfs(int n,int i,int j,int t){
	if(n>ge) return;
	t+=g[i][j];
	if(t>mid) return;
	if(t==mid){
		ans=min(ans,n);
		return;
	}
	mem[i][j]=1;
	if(i+1<r&&mem[i+1][j]==0){
		dfs(n+1,i+1,j,t);
	}
	if(j+1<c&&mem[i][j+1]==0){
		dfs(n+1,i,j+1,t);
	}
	if(j-1>-1&&mem[i][j-1]==0){
		dfs(n+1,i,j-1,t);
	}
	if(i-1>-1&&mem[i-1][j]==0){
		dfs(n+1,i-1,j,t);
	}
	mem[i][j]=0;
} 

int main(){
	cin>>c>>r;
	ge=r*c;
	memset(mem,0,sizeof(mem));
	int total=0;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>g[i][j];
			total+=g[i][j];
		}
	}
	if(total%2!=0){
		cout<<0;
		return 0;
	}
	mid=total/2;
	
	dfs(1,0,0,0);
	if(ans==100){
		cout<<0	;
		return 0;
	}
	cout<<ans;

	return 0;
}

