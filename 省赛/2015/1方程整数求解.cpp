/*
ans=10 
����������

����: a^2 + b^2 + c^2 = 1000
����μ���ͼ1.jpg����
������������������У�a,b,c=6,8,30 
����һ��⡣
���������һ����ʵĽ���

����д�ý�����С�����֡�

ע�⣺���ύ��Ӧ����һ����������Ҫ��д
�κζ�������ݻ�˵�������֡�

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

