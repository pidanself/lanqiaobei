/*
7个 
网友年龄

某君新认识一网友。
当问及年龄时，他的网友说：
“我的年龄是个2位数，我比儿子大27岁,
如果把我的年龄的两位数字交换位置，
刚好就是我儿子的年龄”

请你计算：网友的年龄一共有多少种可
能情况？

提示：30岁就是其中一种可能哦.

请填写表示可能情况的种数。
注意：你提交的应该是一个整数，不要填
写任何多余的内容或说明性文字。

*/
#include<iostream>
#include<sstream>
#include<algorithm>
using namespace std;

void i2s(int i,string &s){
	stringstream sstr;
	sstr<<i;
	sstr>>s;
}

void s2i(string s,int &i){
	stringstream sstr;
	sstr<<s;
	sstr>>i;
}


int main(){
	int ans=0;
	
	for(int i=10;i<=99;i++){
		string s,st;
		int e;
		i2s(i,s);
		reverse(s.begin(),s.end()); 
		s2i(s,e);
		
		if(i-e==27){
			ans++;
			cout<<i<<" "<<e<<endl;
		}
	}


	return 0;
}

