/*
���������
ans=69
4761 328509
С��������һ����������֡�����ƽ
�����������ð�0~9��10������ÿ������ֻ����һ�Ρ�
���ܲ³���������Ƕ�����

����д�����֣���Ҫ��д�κζ�������ݡ�


*/
#include<iostream>
#include<math.h>
#include<cstring>
using namespace std;
int mem[10]={0};//0����û�У�1�������� 

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

