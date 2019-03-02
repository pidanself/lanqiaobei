/*
answer:12
标题：神奇算式

    由4个不同的数字，组成的一个乘法算式，
	它们的乘积仍然由这4个数字组成。

    比如： 

210 x 6 = 1260 
8 x 473 = 3784
27 x 81 = 2187 

    都符合要求。

    如果满足乘法交换律的算式算作同一种情况，
	那么，包含上边已列出的3种情况，一共有多
	少种满足要求的算式。

    请填写该数字，通过浏览器提交答案，不要填
	写多余内容（例如：列出所有算式）。

*/
#include<iostream>
#include<sstream>
using namespace std;
void i2s(int i,string &p){
	stringstream str;
	str<<i;
	str>>p;
}
bool isfour(int i,int j){
	string p,q;
	i2s(i,p);
	i2s(j,q);
	if(p.size()+q.size()==4){
		int pd[1000]={0};
		for(int t=0;t<p.size();t++){
			if(pd[p[t]]==0){
				pd[p[t]]=1;
				
			}
			else{
				return false;
			}
		}
		for(int t=0;t<q.size();t++){
			if(pd[q[t]]==0){
				pd[q[t]]=1;
				
			}
			else{
				return false;
			}
		}
		return true;
	}
	return false;
}
bool isman(int i,int j,int t){
	string p,q,g;
	if(t<=9999&&t>=1000){
		i2s(i,p);
		i2s(j,q);
		i2s(t,g);
		for(int t=0;t<p.size();t++){
			if(g.find(p[t])==string::npos){
				return false;
			}
		}
		for(int t=0;t<q.size();t++){
			if(g.find(q[t])==string::npos){
				return false;
			}
		}
		return true;
	}
	return false;
}
int main(){
	for(int i=0;i<1000;i++){
		for(int j=0;j<1000;j++){
			if(isfour(i,j)){
				int t=i*j;
				if(isman(i,j,t)){
					cout<<i<<" "<<j<<" "<<t<<endl;
				}
			}
		}
	} 


	return 0;
}

