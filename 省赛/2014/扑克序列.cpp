/*
answer:23421314
���⣺�˿�����

    A A 2 2 3 3 4 4�� һ��4���˿��ơ�
	����������ų�һ�С�
    Ҫ������A�м���1���ƣ�����2֮��
	��2���ƣ�����3֮����3���ƣ�����4֮
	����4���ơ�

    ����д�����з���Ҫ��������У��ֵ�
	����С���Ǹ���

���磺22AA3344 �� A2A23344 �ֵ���С��
��Ȼ�����Ƕ���������Ҫ��Ĵ𰸡�


��ͨ��������ύ�𰸡���A��һ����Ҫ��
Сд��ĸa��Ҳ��Ҫ�á�1�����档�ַ���һ
����Ҫ���ո�

*/ 
#include<iostream>
#include<algorithm> 
using namespace std;

bool check(string s){
	if(s.rfind('A')-s.find('A')==2&&
	s.rfind('2')-s.find('2')==3&&
	s.rfind('3')-s.find('3')==4&&
	s.rfind('4')-s.find('4')==5
	){
		return true;
	}
	return false;
}
int main(){
	string s="223344AA" ;
	do{
		if(check(s)){
			cout<<s<<endl;
		}
	}while(next_permutation(s.begin(),s.end()));


	return 0;
}

