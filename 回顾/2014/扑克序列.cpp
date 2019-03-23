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

bool man(string s){
	for(int i=1;i<=4;i++){
		char t='0'+i;
		int j=s.find_last_of(t)-s.find_first_of(t);
		if(j-1==i){
			continue;
		}
		else{
			return false;
		}
		return true;
	}
	
	
	
	
}


int main(){
	string s="11223344";

	do{
		if(man(s)){
			cout<<s;
			break;
		}
		
	}while(next_permutation(s.begin(),s.end()));
	


	return 0;
}

