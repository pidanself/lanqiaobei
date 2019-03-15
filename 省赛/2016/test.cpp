#include<iostream>
using namespace std;

int main(){
	int x=10;
	for(int i=0;i<=31;i++) printf("%d",x>>(31-i)&1);
	
	return 0;
}

