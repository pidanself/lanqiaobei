/*
answer:23421314
标题：扑克序列

    A A 2 2 3 3 4 4， 一共4对扑克牌。
	请你把它们排成一行。
    要求：两个A中间有1张牌，两个2之间
	有2张牌，两个3之间有3张牌，两个4之
	间有4张牌。

    请填写出所有符合要求的排列中，字典
	序最小的那个。

例如：22AA3344 比 A2A23344 字典序小。
当然，它们都不是满足要求的答案。


请通过浏览器提交答案。“A”一定不要用
小写字母a，也不要用“1”代替。字符间一
定不要留空格。

*/ 
#include<iostream>
#include<algorithm> 
using namespace std;

bool check(string s){
	if(s.rfind('A')-s.find('A')==2&&
	s.rfind('2')-s.find('2')==3&&
	s.rfind('3')-s.find('3')==4&&
	s.rfind('4')-s.find('4')==5
	){
		return true;
	}
	return false;
}
int main(){
	string s="223344AA" ;
	do{
		if(check(s)){
			cout<<s<<endl;
		}
	}while(next_permutation(s.begin(),s.end()));


	return 0;
}

