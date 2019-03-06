/*
ans=10 
方程整数解

方程: a^2 + b^2 + c^2 = 1000
（或参见【图1.jpg】）
这个方程有整数解吗？有：a,b,c=6,8,30 
就是一组解。
你能算出另一组合适的解吗？

请填写该解中最小的数字。

注意：你提交的应该是一个整数，不要填写
任何多余的内容或说明性文字。

*/ 
#include<iostream>
using namespace std;

int main(){
	for(int i=0;i*i<=1000;i++){
		for(int j=i;j*j<=1000;j++){
			for(int k=j;k*k<=1000;k++){
				int o=i*i+j*j+k*k;
				if(o==1000){
					printf("%d %d %d \n",i,j,k);
				}
			}
		}
	}


	return 0;
}

