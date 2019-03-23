#include<iostream>
#include<cmath>
using namespace std;
int ans=0;
int g[5][6];
int v[10]={0};

bool pan(int i,int j,int num){
	
	for(int k=-1;k<=1;k++){
		for(int l=-1;l<=1;l++){
			if(g[i+k][j+l]!=-10){
				if(abs(g[i+k][j+l]-num)==1){
					return false;
				}
			}
		}
	}
	return true;
}

void dfs(int i,int j){
	if(i==3&&j==3){
		ans++;
		return ; 
	}
	
	for(int k=0;k<10;k++){
		if(v[k]==0){
			v[k]=1;
		if(j==4){
			if(pan(i+1,1,k)){
				g[i+1][1]=k;
				v[k]=1;
				dfs(i+1,1);
				g[i+1][1]=-10;
				
			}
			
		}
		else{
			if(pan(i,j+1,k)){
				g[i][j+1]=k;
				v[k]=1;
				dfs(i,j+1);
				g[i][j+1]=-10;
				
			}
		}
		v[k]=0;	
		}
		
	} 
	
}

int main(){
	for(int i=0;i<5;i++){
		for(int j=0;j<6;j++){
			g[i][j]=-10;
		}
	}
	for(int i=0;i<10;i++){
		v[i]=1;
		g[1][2]=i;
		dfs(1,2);
		v[i]=0;
	}
	cout<<ans;
	return 0;
}

