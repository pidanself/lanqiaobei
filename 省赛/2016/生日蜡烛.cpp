/*
ans=26
��������

ĳ����ĳ�꿪ʼÿ�궼�ٰ�һ��
����party������ÿ�ζ�Ҫ��Ϩ��
������ͬ����������

��������������һ����Ϩ��236������

���ʣ����Ӷ����꿪ʼ������party�ģ�

����д����ʼ������party����������
ע�⣺���ύ��Ӧ����һ����������
Ҫ��д�κζ�������ݻ�˵�������֡�

*/ 
#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
	for(int i=1;i<=200;i++){
		int ans=0;
		int j=i;
		while(ans<=236){
			ans+=j++;
			if(ans==236){
				cout<<i<<" "<<j<<endl;
				break;				
			}
		}
	}

	return 0;
}

