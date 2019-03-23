/*
剪邮票

如【图1.jpg】, 有12张连在一起的12生肖
的邮票。
现在你要从中剪下5张来，要求必须是连着的。
（仅仅连接一个角不算相连）
比如，【图2.jpg】，【图3.jpg】中，
粉红色所示部分就是合格的剪取。

请你计算，一共有多少种不同的剪取方法。

请填写表示方案数目的整数。
注意：你提交的应该是一个整数，不
要填写任何多余的内容或说明性文字。

*/
#include<iostream>
#include<algorithm>
using namespace std;
int ans=0;
int a[]={0,0,0,0,0,0,0,1,1,1,1,1};
void dfs(int g[3][4],int i,int j){
	g[i][j]=0;
	if(i+1<3&&g[i+1][j]==1) dfs(g,i+1,j);
	if(i-1>=0&&g[i-1][j]==1) dfs(g,i-1,j);
	if(j+1<4&&g[i][j+1]==1) dfs(g,i,j+1);
	if(j-1>=0&&g[i][j-1]==1) dfs(g,i,j-1);
	
}

bool man(int g[3][4]){
	int p=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(g[i][j]==1){
				p++;
				dfs(g,i,j);
			}
		}
	}
	if(p==1) return true;
	return false;
}

bool check(){
	int g[3][4];
	for(int k=0;k<12;k++){
		int i=k/4;
		int j=k%4;
		g[i][j]=a[k];
	}
	if(man(g)){
		return true;
	}
	else{
		return false;
	}
}
 
int main(){
	do{
		if(check()){
			ans++;
		}
	}while(next_permutation(a,a+12));
	cout<<ans;
	return 0;
}

