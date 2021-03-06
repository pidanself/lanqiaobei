/*
得不了满分 因为会超时 233 
标题：地宫取宝

    X 国王有一个地宫宝库。是 n x m 个
	格子的矩阵。每个格子放一件宝贝。
	每个宝贝贴着价值标签。

    地宫的入口在左上角，出口在右下角。

    小明被带到地宫的入口，国王要求他只
	能向右或向下行走。

    走过某个格子时，如果那个格子中的宝
	贝价值比小明手中任意宝贝价值都大，
	小明就可以拿起它（当然，也可以不拿）。

    当小明走到出口时，如果他手中的宝贝
	恰好是k件，则这些宝贝就可以送给小明。

    请你帮小明算一算，在给定的局面下，
	他有多少种不同的行动方案能获得这k件宝贝。

【数据格式】

    输入一行3个整数，用空格分开：n m k 
	(1<=n,m<=50, 1<=k<=12)

    接下来有 n 行数据，每行有 m 个整数 
	Ci (0<=Ci<=12)代表这个格子上的宝物的价值

    要求输出一个整数，表示正好取k个宝贝
	的行动方案数。该数字可能很大，输出它
	对 1000000007 取模的结果。

例如，输入：
2 2 2
1 2
2 1
程序应该输出：
2

再例如，输入：
2 3 2
1 2 3
2 1 5
程序应该输出：
14


资源约定：
峰值内存消耗 < 256M
CPU消耗  < 1000ms


请严格按要求输出，不要画蛇添足地打
印类似：“请您输入...” 的多余内容。

所有代码放在同一个源文件中，调试通
过后，拷贝提交该源码。

注意: main函数需要返回0
注意: 只使用ANSI C/ANSI C++ 标准，
不要调用依赖于编译环境或操作系统的
特殊函数。
注意: 所有依赖的函数必须明确地在源
文件中 #include <xxx>， 不能通过工
程设置而省略常用头文件。

提交时，注意选择所期望的编译器类型。

*/
#include<iostream>
#include<cstring>
using namespace std;
int n,m,k=0;
int o=0;
int a[50][50];
int me[50][50][14][14];
long long expl(int y,int x,int max,int num){
	long long ans=0;
	if(me[y][x][max+1][num]!=-1){
		return me[y][x][max+1][num];
	}
	if(y==n||x==m||num>k){
		return 0;
	}
	if(y==n-1&&x==m-1){
		//不拿 
		if(num==k){
			ans++;
		}
		//想拿
		else if(a[y][x]>max&&(num+1)==k){
			ans++;
		} 
	}
	if(a[y][x]>max){
		ans+=expl(y,x+1,a[y][x],num+1);
		ans+=expl(y+1,x,a[y][x],num+1);
	}
	ans+=expl(y,x+1,max,num);
	ans+=expl(y+1,x,max,num);
	ans=ans%1000000007;
	me[y][x][max+1][num]=ans;
	
	return ans;
}

int main(){
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	memset(me,-1,sizeof(me));
	
	cout<<expl(0,0,-1,0);
	return 0;
}

