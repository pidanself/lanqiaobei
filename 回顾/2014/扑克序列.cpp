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

bool man(string s){
	for(int i=1;i<=4;i++){
		char t='0'+i;
		int j=s.find_last_of(t)-s.find_first_of(t);
		if(j-1==i){
			continue;
		}
		else{
			return false;
		}
		return true;
	}
	
	
	
	
}


int main(){
	string s="11223344";

	do{
		if(man(s)){
			cout<<s;
			break;
		}
		
	}while(next_permutation(s.begin(),s.end()));
	


	return 0;
}

