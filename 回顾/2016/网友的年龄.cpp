#include<iostream>
using namespace std;

int rev(int i){
	int j=0;
	if(i%10==0){
		i=i/10;
		return i;
	}
	else{
		j+=i%10;
		i/=10;
		j=j*10+i;
	}
}

int main(){
	int ans=0;
	for(int i=10;i<100;i++){
		if(i-rev(i)==27){
			cout<<i<<endl;
			ans++;
		}
	} 
	cout<<ans;
	return 0;
}

