/*
����Ʊ

�硾ͼ1.jpg��, ��12������һ���12��Ф
����Ʊ��
������Ҫ���м���5������Ҫ����������ŵġ�
����������һ���ǲ���������
���磬��ͼ2.jpg������ͼ3.jpg���У�
�ۺ�ɫ��ʾ���־��Ǻϸ�ļ�ȡ��

������㣬һ���ж����ֲ�ͬ�ļ�ȡ������

����д��ʾ������Ŀ��������
ע�⣺���ύ��Ӧ����һ����������
Ҫ��д�κζ�������ݻ�˵�������֡�

*/
#include<iostream>
#include<algorithm>
using namespace std;
int ans=0;
int a[]={0,0,0,0,0,0,0,1,1,1,1,1};
void dfs(int g[3][4],int i,int j){
	g[i][j]=0;
	if(i+1<3&&g[i+1][j]==1) dfs(g,i+1,j);
	if(i-1>=0&&g[i-1][j]==1) dfs(g,i-1,j);
	if(j+1<4&&g[i][j+1]==1) dfs(g,i,j+1);
	if(j-1>=0&&g[i][j-1]==1) dfs(g,i,j-1);
	
}

bool man(int g[3][4]){
	int p=0;
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			if(g[i][j]==1){
				p++;
				dfs(g,i,j);
			}
		}
	}
	if(p==1) return true;
	return false;
}

bool check(){
	int g[3][4];
	for(int k=0;k<12;k++){
		int i=k/4;
		int j=k%4;
		g[i][j]=a[k];
	}
	if(man(g)){
		return true;
	}
	else{
		return false;
	}
}
 
int main(){
	do{
		if(check()){
			ans++;
		}
	}while(next_permutation(a,a+12));
	cout<<ans;
	return 0;
}

