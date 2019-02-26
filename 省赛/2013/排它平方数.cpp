/*
题目标题: 排它平方数

    小明正看着 203879 这个数字发呆。

    原来，203879 * 203879 = 41566646641

    这有什么神奇呢？仔细观察，203879 是个6位数，并
	且它的每个数位上的数字都是不同的，并且它平方后
	的所有数位上都不出现组成它自身的数字。

    具有这样特点的6位数还有一个，请你找出它！

    再归纳一下筛选要求：
    1. 6位正整数
    2. 每个数位上的数字不同
    3. 其平方数的每个数位不含原数字的任何组成数位

答案是一个6位的正整数。

请通过浏览器提交答案。
注意：只提交另一6位数，题中已经给出的这个不要提交。
注意：不要书写其它的内容（比如：说明性的文字）。

*/ 
#include<iostream>
#include<sstream>
using namespace std;

void i2s(long long i,string &s){
	stringstream sstr;
	sstr<<i;
	sstr>>s;
}
bool isfirst(long long i){
	string s;
	i2s(i,s);
	int p[1000]={0};
	for(int j=0;j<6;j++){
		if(p[s[j]]==0){
			p[s[j]]=1;
		
		}
		else{
			
			return false;
		}
	}
	return true;
} 

bool issecond(long long i){
	long long j;
	string s,ss;
	j=i*i;
	i2s(i,s);
	i2s(j,ss);
	for(int x=0;x<6;x++){
		if(ss.find(s[x])!=string::npos){
			return false;
		}
	}
	return true;
}

int main(){

	for(long long i=100000;i<=999999;i++){
			if(isfirst(i)){
				if(issecond(i)){
					cout<<i<<endl;
				}
			}
	}
	

	return 0;
}

