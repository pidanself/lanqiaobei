/*
方格填数

如下的10个格子
   +--+--+--+
   |  |  |  |
+--+--+--+--+
|  |  |  |  |
+--+--+--+--+
|  |  |  |
+--+--+--+

（如果显示有问题，也可以参看【图1.jpg】）

填入0~9的数字。要求：连续的两个数字不能
相邻。
（左右、上下、对角都算相邻）

一共有多少种可能的填数方案？

请填写表示方案数目的整数。
注意：你提交的应该是一个整数，不要填写
任何多余的内容或说明性文字。
*/
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int ju[5][6];
int v[10]={0}; 
int ans=0;

bool check(int col,int row,int n){
	int c,r;
	for(int i=-1;i<2;i++){
		for(int j=-1;j<2;j++){
			c=col+i;
			r=row+j;
			if(abs(ju[c][r]-ju[col][row])==1){
				return false;
			}
		}
		
	}
	return true;
}

void find(int col,int row){
	for(int n=0;n<10;n++){
		if(v[n]==0){
			if(check(col,row,n)){
				if(col==3&&row==3){
					ans++;
					continue;
				}
				ju[col][row]=n;
				v[n]=1;
				if(row==4){
					find(col+1,1);
				}
				else{
					find(col,row+1);
				}
				ju[col][row]=-10;
				v[n]=0;
			}
		}
	}
	
	
}

int main(){

	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			ju[i][j]=-10;
		}
	}
	find(1,2);
	cout<<ans;


	return 0;
}

