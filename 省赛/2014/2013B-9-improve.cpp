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
#include<math.h>
#include<cstring>
using namespace std;
int mem[10]={0}; 
int comcnt(int i,int j,int k){
	return (int)log10(i)+(int)log10(j)+(int)log10(k)+3;
}
int comcnt(int i){
	return (int)log10(i)+1;
}

bool isrepeat(int i){
	int cnt=comcnt(i);
	for(int j=0;j<cnt;j++){
		int c=i%10;
		i=i/10;
		if(mem[c]==0){
			mem[c]=1;
		}
		else{
			return true;
		}
	}
	return false;
	
}
int main(){
	int num,ans=0;
	mem[0]=1;
	cin>>num;
	for(int i=1;i<num;i++){
		for(int j=1;;j++){
			memset(mem,0,sizeof(mem));
			mem[0]=1;
			int k=(num-i)*j;
			int cnt=comcnt(i,j,k);
			if(cnt>9) break;
			if(cnt<9) continue;
			if(isrepeat(i)||isrepeat(j)||isrepeat(k)) continue;
			
			ans++;
		}
	}
	cout<<ans;

	return 0;
}

