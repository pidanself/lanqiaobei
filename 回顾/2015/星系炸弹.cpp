/*
��ϵը��

��X��ϵ�Ĺ���ռ���Ư�������
X�����조ը������������Ϊ�����е�·�ꡣ
ÿ��ը���������趨������֮��ը��
���磺������ը��2015��1��1�շ�
�ã���ʱΪ15�죬������2015��1��16�ձ�ը��
��һ������ը����2014��11��9�շ��ã�
��ʱΪ1000�죬�����������ը��׼ȷ���ڡ�

����д�����ڣ���ʽΪ yyyy-mm-dd  
��4λ���2λ�·�2λ���ڡ����磺2015-02-19
���ϸ��ո�ʽ��д�����ܳ����������ֻ���š�
*/
#include<iostream>
using namespace std;

bool yeap(int y){
	if(y%4==0&&y%100!=0||y%400==0){
		return true;
	}
	return false;
}

void com(int &y,int &m,int &d,int num){
	for(int i=1;i<=num;i++){
		d++;
		switch(m){
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
			if(d==32){
				m++;d=1;
					
			}
			break;
		case 12:
			if(d==32){
				m=1;d=1;y++;
					
			}
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			if(d==31){
				m++;d=1;
					
			}
			break;
		case 2:
			if(yeap(y)){
				if(d==30){
					m++;
					d=1;
				
				}
			}
			else{
				if(d==29){
					m++;
					d=1;
				
				}
			}
			break;
	}
	}
	
	
	
}


int main(){
	int y=2014,m=11,d=9;
	cin>>y>>m>>d;
	int num;
	cin>>num;
	com(y,m,d,num);
	printf("%d,%d,%d",y,m,d); 
	return 0;
}

