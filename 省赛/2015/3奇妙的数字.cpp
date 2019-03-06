/*
奇妙的数字
ans=69
4761 328509
小明发现了一个奇妙的数字。它的平
方和立方正好把0~9的10个数字每个用且只用了一次。
你能猜出这个数字是多少吗？

请填写该数字，不要填写任何多余的内容。


*/
#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
int mem[10]={0};//0代表没有，1代表已有 

int cnt(int i){
	return (int)log10(i)+1;
} 

bool isman(int i,int j){
	int ii=cnt(i),jj=cnt(j);
	for(int k=0;k<ii;k++){
		int t=i%10;
		if(mem[t]==1){
			return false;
		}
		mem[t]=1;
		i=i/10;
	}
	for(int k=0;k<jj;k++){
		int t=j%10;
		if(mem[t]==1){
			return false;
		}
		mem[t]=1;
		j=j/10;
	}
	return true;
}

int main(){
	for(int i=0;;i++){
		int j=i*i;
		int k=j*i;
		if(cnt(j)+cnt(k)==10){
			if(isman(j,k)){
				cout<<i;
				break;
			}
			memset(mem,0,sizeof(mem));
		}
	} 


	return 0;
}

