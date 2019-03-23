//排它平方数 
#include<iostream>
#include<cstring>
#include<sstream>
using namespace std;
int mem[10]={0};

void i2s(long long i,string &str){
	stringstream sstr;
	sstr<<i;
	sstr>>str;
}

bool isnre(long long i){
	string str;
	i2s(i,str);
	for(int j=0;j<str.length();j++){
		if(mem[(int)(str[j]-'0')]==0){
			mem[(int)(str[j]-'0')]=1;
		}
		else{
			return false;
		}
	}
	return true;
}

bool isre(long long j){
	string str;
	i2s(j,str);
	for(int i=0;i<str.length();i++){
		if(mem[(int)(str[i]-'0')]==1){
			return false;
		}
	}
	return true;
}

bool paita(int i){
	if(isnre(i)){
		long long j=(long long)i;
		j=j*j;
		if(isre(j)){
			memset(mem,0,sizeof(mem));
			return true;
		}
	}
	memset(mem,0,sizeof(mem));
	return false;
}

int main(){
	for(int i=100000;i<999999;i++){
		if(paita(i)){
			cout<<i<<endl;
		}
	} 

	return 0;
}

