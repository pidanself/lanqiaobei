/*
����: �ߵ��ļ���


    С��ĵ���ר�����������¼ܵ���Ʒ����
	�����ɳ�Ϊ����Ʒ����ר���ꡣ

    ���۶���4λ���֣���ǧԪ���ȣ���

    С��Ϊ�˱�����������㣬ʹ����Ԥ�Ƶ�
	��������ܵı��ǩ��ֻҪ��
	��ɫ��Ϳ���־Ϳ����ˣ��μ�p1.jpg����

    ���ּ����и��ص㣬��һЩ���֣�������
	��Ҳ�Ǻ�������֡��磺1 2 5 6 8 9 0 
	�����ԡ�����һ����������ӹҵ��ˣ���
	������ȫ�������һ���۸�
	���磺1958 ���ŹҾ��ǣ�8561�����˼�ǧ
	Ԫ��!! 

    ��Ȼ������������ܵ��������磬1110 ��
	���ܵ���������Ϊ0������Ϊ��ʼ���֡�

    ��һ�죬�������ڷ����ˡ�ĳ����Ա��С��
	�ѵ����ĳ�����۸��Ƹ��ҵ��ˡ�
	�����������۸��Ƶĵ��ӻ�������ȥ��!

    ���ҵ��Ǽ۸���벻������һ����������2
	�ٶ࣬��һ������ȴ׬��8�ٶ࣬
	�ۺ�������������׬��558Ԫ��

    �������Щ��Ϣ���㣺��Ǯ���Ǹ�������ȷ
	�ļ۸�Ӧ���Ƕ��٣�


����һ��4λ����������ͨ�������ֱ���ύ
�����֡�
ע�⣺��Ҫ�ύ�����̣�����������˵����
�����ݡ�

*/ 
#include<iostream>
#include<sstream>
using namespace std;
void i2s(int num,string &str){
	stringstream sstr;
	sstr<<num;
	sstr>>str; 
}
bool isud(int x){
	string str;
	i2s(x,str);
	if(str[3]=='0'){
		return false;
	}
	for(int i=3;i>=0;i--){
		switch(str[i]){
			case '3':
			case '4':
			case '7':
				return false;
		}
	}
	return true;
} 
void s2i(string str,int &num){
	stringstream sstr;
	sstr<<str;
	sstr>>num;
}

int ud(int x){
	string str;
	int num;
	i2s(x,str);
	string tr="0000";
	for(int i=0;i<4;i++){
		if(str[i]=='6'){
			tr[3-i]='9';
		}
		else if(str[i]=='9'){
			tr[3-i]='6';
		}
		else{
			tr[3-i]=str[i];
		}
	}
	s2i(tr,num);
	return num;
}


typedef struct{
	int pd,op,pp;
}jh;
int main(){
	jh ten[10000],tep[10000];
	int n=0,p=0;
	
	for(int i=1001;i<=9999;i++){
		if(isud(i)){
			int j=ud(i)-i;
			if(j<=-200&&j>=-299){
				ten[n].pd=j;
				ten[n].op=i;
				ten[n].pp=ud(i);
				n++;
			}
			else if(j>=800&&j<=899){
				tep[p].pd=j;
				tep[p].op=i;
				tep[p].pp=ud(i);
				p++;
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<p;j++){
			if(ten[i].pd+tep[j].pd==558){
				cout<<ten[i].op<<" "<<tep[j].op<<endl;
			}
		}
	}

	return 0;
}

