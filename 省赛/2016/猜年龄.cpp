/*
7�� 
��������

ĳ������ʶһ���ѡ�
���ʼ�����ʱ����������˵��
���ҵ������Ǹ�2λ�����ұȶ��Ӵ�27��,
������ҵ��������λ���ֽ���λ�ã�
�պþ����Ҷ��ӵ����䡱

������㣺���ѵ�����һ���ж����ֿ�
�������

��ʾ��30���������һ�ֿ���Ŷ.

����д��ʾ���������������
ע�⣺���ύ��Ӧ����һ����������Ҫ��
д�κζ�������ݻ�˵�������֡�

*/
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

void i2s(int i,string &s){
	stringstream sstr;
	sstr<<i;
	sstr>>s;
}

void s2i(string s,int &i){
	stringstream sstr;
	sstr<<s;
	sstr>>i;
}


int main(){
	int ans=0;
	
	for(int i=10;i<=99;i++){
		string s,st;
		int e;
		i2s(i,s);
		reverse(s.begin(),s.end()); 
		s2i(s,e);
		
		if(i-e==27){
			ans++;
			cout<<i<<" "<<e<<endl;
		}
	}


	return 0;
}

