/*
��������

���µ�10������
   +--+--+--+
   |  |  |  |
+--+--+--+--+
|  |  |  |  |
+--+--+--+--+
|  |  |  |
+--+--+--+

�������ʾ�����⣬Ҳ���Բο���ͼ1.jpg����

����0~9�����֡�Ҫ���������������ֲ���
���ڡ�
�����ҡ����¡��ԽǶ������ڣ�

һ���ж����ֿ��ܵ�����������

����д��ʾ������Ŀ��������
ע�⣺���ύ��Ӧ����һ����������Ҫ��д
�κζ�������ݻ�˵�������֡�
*/
#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int ju[5][6];
int v[10]={0}; 
int ans=0;

bool check(int col,int row,int n){
	int c,r;
	for(int i=-1;i<2;i++){
		for(int j=-1;j<2;j++){
			c=col+i;
			r=row+j;
			if(abs(ju[c][r]-ju[col][row])==1){
				return false;
			}
		}
		
	}
	return true;
}

void find(int col,int row){
	for(int n=0;n<10;n++){
		if(v[n]==0){
			if(check(col,row,n)){
				if(col==3&&row==3){
					ans++;
					continue;
				}
				ju[col][row]=n;
				v[n]=1;
				if(row==4){
					find(col+1,1);
				}
				else{
					find(col,row+1);
				}
				ju[col][row]=-10;
				v[n]=0;
			}
		}
	}
	
	
}

int main(){

	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			ju[i][j]=-10;
		}
	}
	find(1,2);
	cout<<ans;


	return 0;
}

