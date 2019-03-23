//ÕñĞËÖĞ»ª 
#include<iostream>
using namespace std;
int cnt=0;

void dfs(int i,int j){
	if(i==3&&j==4){
		cnt++;
		return;
	}
	
	if(i+1<=3) dfs(i+1,j);
	if(j+1<=4) dfs(i,j+1);
	
}

int main(){

	dfs(0,0);
	cout<<cnt;
	return 0;
}

