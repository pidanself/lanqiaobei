//高斯日记 
#include<iostream>
using namespace std;

bool isleap(int y){
	if(y%4==0&&y%100!=0||y%400==0){
		return true;
	}
	return false;
}

int main(){
re:
	int y=1777,m=4,d=30;
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
		d++;
		switch(m){
			case 1:
			case 3:
			case 5:
			case 7:
			case 8:
			case 10:
				if(d==32){
					d=1;
					m++;
				}
				break;
			case 12:
				if(d==32){
					d=1;
					m=1;
					y++;
				}
				break;
			case 4:
			case 6:
			case 9:
			case 11:
				if(d==31){
					d=1;
					m++;
				}
				break;
			case 2:
				if(isleap(y)){
					if(d==30){
						d=1;
						m++;
					}
					break;
				}
				else{
					if(d==29){
						d=1;
						m++;
					}
					break;
				}
					
		}
	}
	printf("%d,%d,%d\n",y,m,d);
	goto re;
	return 0;
}

