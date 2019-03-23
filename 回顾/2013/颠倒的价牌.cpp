//µßµ¹µÄ¼ÛÅÆ 
#include<iostream>
#include<vector>
using namespace std;
int mem[10];
struct t{
	int p,n,d;
};
vector<t> vz;
vector<t> vp;
int updown(int p){
	int ans=0;
	for(int i=0;i<4;i++){
		int y=p%10;
		p=p/10;
		ans=ans*10+mem[y];
	}
	return ans;
}

bool isup(int p){
	string str;
	if(p%10==0){
		return false;
	}
	for(int i=0;i<4;i++){
		int y=p%10;
		p=p/10;
		if(mem[y]==-1){
			return false;
		}
	}
	return true;
}

int main(){
	mem[0]=0;
	mem[1]=1;
	mem[2]=2;
	mem[3]=-1;
	mem[4]=-1;
	mem[5]=5;
	mem[6]=9;
	mem[7]=-1;
	mem[8]=8;
	mem[9]=6;
	
	for(int i=1000;i<=9999;i++){
		if(isup(i)){
			int j=updown(i);
			t tt;
			if(j-i<-200&&j-i>-300){
				
				tt.p=i;tt.n=j;tt.d=j-i;
				vp.push_back(tt);
			}
			else if(j-i<900&&j-i>800){
				tt.p=i;tt.n=j;tt.d=j-i;
				vz.push_back(tt);
			}
		}
	}
	
	for(int i=0;i<vp.size();i++){
		for(int j=0;j<vz.size();j++){
			if(vp[i].d+vz[j].d==558){
				cout<<vp[i].p<<endl;
			}
		}
	}


	return 0;
}

