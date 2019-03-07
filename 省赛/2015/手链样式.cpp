/*
ans=27720 
手链样式

小明有3颗红珊瑚，4颗白珊瑚，5颗黄玛瑙。
他想用它们串成一圈作为手链，送给女朋友。
现在小明想知道：如果考虑手链可以随意
转动或翻转，一共可以有多少不同的组合样式呢？

请你提交该整数。不要填写任何多余的内容
或说明性的文字。
*/ 
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int ans=0;
int main(){
	string s="aaabbbbccccc";
	vector<string> ss;
	do{
		int i=0;
		for(i=0;i<ss.size();i++){
			if(ss[i].find(s)!=string::npos) break;
		}
		if(i!=ss.size()){
			continue;
		}
		string s1=s+s;
		ss.push_back(s1);
		reverse(s1.begin(),s1.end());
		ss.push_back(s1);
		ans++; 
	}while(next_permutation(s.begin(),s.end()));
	cout<<ans;
	return 0;
}

