/*

���⣺������

    100 ���Ա�ʾΪ����������
	ʽ��100 = 3 + 69258 / 714

    �����Ա�ʾΪ��100 = 82 + 3546 / 197

    ע���������������У�����1~9��
	�������ֻ����һ�Σ�������0����

    ���������Ĵ�������100 �� 11 
	�ֱ�ʾ����

��ĿҪ��
�ӱ�׼�������һ��������N (N<1000*1000)
�������������������1~9���ظ�����
©����ɴ�������ʾ��ȫ��������
ע�⣺��Ҫ�����ÿ����ʾ��ֻͳ����
���ٱ�ʾ����


���磺
�û����룺
100
���������
11

�����磺
�û����룺
105
���������
6


��ԴԼ����
��ֵ�ڴ����� < 64M
CPU����  < 3000ms


���ϸ�Ҫ���������Ҫ��������ش�ӡ
���ƣ�����������...�� �Ķ������ݡ�

���д������ͬһ��Դ�ļ��У�����ͨ��
�󣬿����ύ��Դ�롣

ע��: main������Ҫ����0
ע��: ֻʹ��ANSI C/ANSI C++ ��׼����
Ҫ���������ڱ��뻷�������ϵͳ�����⺯����
ע��: ���������ĺ���������ȷ����Դ�ļ�
�� #include <xxx>�� ����ͨ����������
��ʡ�Գ���ͷ�ļ���

�ύʱ��ע��ѡ���������ı��������͡�
*/
#include<iostream>
#include<algorithm>
#include<sstream>
using namespace std;
int ans=0;

//void s2i(string s,double &i){
//	stringstream sstr;
//	sstr<<s;
//	sstr>>i;
//}
//bool check(string s,int num){
//	int ad=s.find('+');
//	int mi=s.find('/');
//	if(s.find('/')>s.find('+')){
//		if(s.find('/')>=3&&s.find('/')<=9){
//			if(s.find('+')>=1&&s.find('+')<=7){
//				string a,b,c;
//				double q,w,e;
//				a=s.substr(0,ad);
//				b=s.substr(ad+1,mi-ad-1);
//				c=s.substr(mi+1,10-mi);
//				s2i(a,q);
//				s2i(b,w);
//				s2i(c,e);
//				double numm=q+w/e;
//				
//				if(numm==num){
//					//printf("%lf+%lf/%lf=%lf",q,w,e,numm);
//					//cout<<endl;
//					return true;
//				}
//			}
//		}
//	}
//	return false;
//	
//}
int parse(string str,int begin,int num){
	int o;
	string s=str.substr(begin,num);
	stringstream sstr;
	sstr<<s;
	sstr>>o;
	return o;
}
int main(){
	int num,fu=0;
	cin>>num;
	string s="123456789";
	do{
		for(int i=1;i<=7;i++){
			int a=parse(s,0,i);
			if(a>=num) break;
			for(int j=1;j<=9-i-1;j++){
				int b=parse(s,i,j);
				int c=parse(s,i+j,9-i-j);
				fu++;
				if(b%c==0&&(a+b/c)==num){
					ans++;
				}
			}
		}
	}while(next_permutation(s.begin(),s.end()));
	cout<<fu;
	return 0;
}

