/*
��Ŀ����: ����ƽ����

    С�������� 203879 ������ַ�����

    ԭ����203879 * 203879 = 41566646641

    ����ʲô�����أ���ϸ�۲죬203879 �Ǹ�6λ������
	������ÿ����λ�ϵ����ֶ��ǲ�ͬ�ģ�������ƽ����
	��������λ�϶��������������������֡�

    ���������ص��6λ������һ���������ҳ�����

    �ٹ���һ��ɸѡҪ��
    1. 6λ������
    2. ÿ����λ�ϵ����ֲ�ͬ
    3. ��ƽ������ÿ����λ����ԭ���ֵ��κ������λ

����һ��6λ����������

��ͨ��������ύ�𰸡�
ע�⣺ֻ�ύ��һ6λ���������Ѿ������������Ҫ�ύ��
ע�⣺��Ҫ��д���������ݣ����磺˵���Ե����֣���

*/ 
#include<iostream>
#include<sstream>
using namespace std;

void i2s(long long i,string &s){
	stringstream sstr;
	sstr<<i;
	sstr>>s;
}
bool isfirst(long long i){
	string s;
	i2s(i,s);
	int p[1000]={0};
	for(int j=0;j<6;j++){
		if(p[s[j]]==0){
			p[s[j]]=1;
		
		}
		else{
			
			return false;
		}
	}
	return true;
} 

bool issecond(long long i){
	long long j;
	string s,ss;
	j=i*i;
	i2s(i,s);
	i2s(j,ss);
	for(int x=0;x<6;x++){
		if(ss.find(s[x])!=string::npos){
			return false;
		}
	}
	return true;
}

int main(){

	for(long long i=100000;i<=999999;i++){
			if(isfirst(i)){
				if(issecond(i)){
					cout<<i<<endl;
				}
			}
	}
	

	return 0;
}

