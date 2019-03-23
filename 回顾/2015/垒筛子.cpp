#define M 1000000007
#include<iostream>
using namespace std;
int d[7]={0};
int con[7][7]={0};
int n;

int mem[1000000001][7]={0};
long long dfs(int c,int x){
	long long tans=0;
	if(mem[c][x]!=0){
		return mem[c][x];
	}
	if(c==n){
		return 1;
	}
	int s=d[x];
	for(int i=1;i<7;i++){
		if(con[i][s]==0){
			tans+=4*dfs(c+1,i);
			tans%=M;
		}
	}
	mem[c][x]=tans;
	return tans;
	
} 
int main(){
	int m;
	long long ans=0;
	cin>>n>>m;
	
	d[1]=4;
	d[2]=5;
	d[3]=6;
	d[4]=1;
	d[5]=2;
	d[6]=3;
	
	for(int i=0;i<m;i++){
		int t,k;
		cin>>t>>k;
		con[t][k]=1;
		con[k][t]=1;
	}
	for(int i=1;i<=6;i++){
		ans+=4*dfs(1,i);
		ans%=M;
	}

	cout<<ans;
	return 0;
}

