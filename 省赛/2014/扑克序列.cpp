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
#include<sstream>
#include<algorithm> 
using namespace std;
void i2s(int i,string &str){
	stringstream sstr;
	sstr<<i;
	sstr>>str;
}
bool isman(int i){
	string str;
	i2s(i,str);
	for(int j=0;j<str.length();j++){
		if(str[j]!='1'&&str[j]!='2'&&str[j]!='3'&&str[j]!='4'){
			return false;
		}
		int q=count(str.begin(),str.end(),str[j]);
		if(q!=2){
			return false;
		}
	}
	int pd[1000]={0};
	for(int j=0;j<str.length();j++){
		if(pd[str[j]]==0){
			if(str[j]!=str[j+str[j]-'0'+1]){
				return false;
			}
			pd[str[j]]=1;
		}		
	}
	return true;
}  
int main(){
	
	for(int i=11223344;i<44332211;i++){
		if(isman(i)){
			cout<<i<<endl;
		}
	} 


	return 0;
}

