//八皇后问题
 
#include<iostream>
#include<cstring>
using namespace std;
int qi[13][13];
int ans=0;

bool check(int row,int col){
	//左上
	int i=row-1,j=col-1;
	while(i<=12&&i>0&&j<=12&&j>0){
		if(qi[i][j]==1){
			return false;
		}
		i--;
		j--;
	}
	
	//右下
	i=row+1,j=col+1;
	while(i<=12&&i>0&&j<=12&&j>0){
		if(qi[i][j]==1){
			return false;
		}
		i++;
		j++;
	}
	
	//左下
	i=row+1,j=col-1;
	while(i<=12&&i>0&&j<=12&&j>0){
		if(qi[i][j]==1){
			return false;
		}
		i++;
		j--;
	}
	
	//左上
	i=row-1,j=col+1;
	while(i<=12&&i>0&&j<=12&&j>0){
		if(qi[i][j]==1){
			return false;
		}
		i--;
		j++;
	} 
	
	//上 
	i=row-1,j=col;
	while(i<=12&&i>0&&j<=12&&j>0){
		if(qi[i][j]==1){
			return false;
		}
		i--;
	} 
	
	//有 
	i=row+1,j=col;
	while(i<=12&&i>0&&j<=12&&j>0){
		if(qi[i][j]==1){
			return false;
		}
		i++;
	} 
	
	return true;
}

void find(int row){
	if(row>12){
		ans++;
		return;
	}
	else{
		for(int col=1;col<13;col++){
			if(check(row,col)){
				qi[row][col]=1;
				find(row+1);
				qi[row][col]=0;
			}
		}
	}
}

int main(){
	memset(qi,0,sizeof(qi));
	
	find(1);
	
	cout<<ans;

	return 0;
}

