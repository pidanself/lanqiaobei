#include<iostream>
using namespace std;

bool su(int i){
	int ans=0;
	while(1){
		ans+=i;
		i++;
		if(ans>236){
			return false;
		}
		if(ans==236){
			return true;
		}
	}
}

int main(){
	
	for(int i=0;i<200;i++){
		if(su(i)){
			cout<<i<<endl;
		}
	}


	return 0;
}

