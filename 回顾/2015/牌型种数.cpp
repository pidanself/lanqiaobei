#include<iostream>
using namespace std;
int ans=0; 

void f(int num,int cnt){
	if(num>13||cnt>14){
		return ;
	}
	
	if(num==13){
		ans++;
		return;
	}
	
	for(int i=0;i<=4;i++){
		f(num+i,cnt+1);
	}
	
	
	
} 

int main(){

	f(0,1);
	cout<<ans;
	return 0;
}

