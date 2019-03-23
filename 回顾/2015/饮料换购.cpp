#include<iostream>
using namespace std;
int n,ans=0;

void dfs(int n,int y){
	if(n==0) return;
	ans+=(n+y)/3;
	int t=(n+y)%3;
	dfs((n+y)/3,t);
}
 
int main(){
	cin>>n;
	ans=n;
	dfs(n,0);
	cout<<ans;

	return 0;
}

