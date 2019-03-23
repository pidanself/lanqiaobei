#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int mem[10]={0};
bool pan(int i,int j){
	int y;
	do{
		y=i%10;
		i/=10;
		if(mem[y]==0){
			mem[y]=1;
		}
		else{
			return false;
		}
	}while(i!=0);
	do{
		y=j%10;
		j/=10;
		if(mem[y]==0){
			mem[y]=1;
		}
		else{
			return false;
		}
	}while(j!=0);

	return true;
}

int cnt(int i){
	return (int)log10(i)+1;
}
int main(){
	
	for(int i=0;;i++){
		if(cnt(i*i)+cnt(i*i*i)==10){
			if(pan(i*i,i*i*i)){
				cout<<i;
				break;	
			}	
		}
		memset(mem,0,sizeof(mem));
	} 


	return 0;
}

