/*
���⣺������ʽ

    ��4����ͬ�����֣���ɵ�һ���˷���ʽ��
	���ǵĳ˻���Ȼ����4��������ɡ�

    ���磺 

210 x 6 = 1260 
8 x 473 = 3784
27 x 81 = 2187 

    ������Ҫ��

    �������˷������ɵ���ʽ����ͬһ�������
	��ô�������ϱ����г���3�������һ���ж�
	��������Ҫ�����ʽ��

    ����д�����֣�ͨ��������ύ�𰸣���Ҫ��
	д�������ݣ����磺�г�������ʽ����

*/
#include<iostream>
using namespace std;
#include<cmath>
#include<set>
#include<cstring>
int mem[10]={0};
set<int> m;
int cnt(int i){
	return (int)log10(i)+1;
}

bool isnre(int i,int j){
	do{
		int y=i%10;
		i=i/10;
		if(mem[y]==0){
			mem[y]=1;
		}
		else{
			memset(mem,0,sizeof(mem));
			return false;
		}
	}while(i!=0);
	
	do{
		int y=j%10;
		j=j/10;
		if(mem[y]==0){
			mem[y]=1;
		}
		else{
			memset(mem,0,sizeof(mem));
			return false;
		}
	}while(j!=0);
	memset(mem,0,sizeof(mem));
	return true;
}

bool isman(int i,int j,int ji){
	
	do{
		int y=i%10;
		i=i/10;
		m.insert(y);
	}while(i!=0);
	
	do{
		int y=j%10;
		j=j/10;
		m.insert(y);
	}while(j!=0);
	
	do{
		int y=ji%10;
		ji=ji/10;
		if(m.count(y)==0){
			m.clear();
			return false;
		}
		m.erase(y);
	}while(ji!=0);
	m.clear();
	return true;
	
}


int ans=0;
int main(){

	for(int i=1;i<999;i++){
		for(int j=i+1;j<999;j++){
			int ji=i*j;
			if(cnt(i)+cnt(j)+cnt(ji)==8){
				if(isnre(i,j)){
					if(isman(i,j,ji)){
						cout<<i<<" "<<j<<" "<<ji<<endl;
						ans++;
					}
				}
			}
		}
	} 
	cout<<"ans is "<<ans;

	return 0;
}

