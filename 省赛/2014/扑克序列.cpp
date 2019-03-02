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
#include<sstream>
#include<algorithm> 
using namespace std;
void i2s(int i,string &str){
	stringstream sstr;
	sstr<<i;
	sstr>>str;
}
bool isman(int i){
	string str;
	i2s(i,str);
	for(int j=0;j<str.length();j++){
		if(str[j]!='1'&&str[j]!='2'&&str[j]!='3'&&str[j]!='4'){
			return false;
		}
		int q=count(str.begin(),str.end(),str[j]);
		if(q!=2){
			return false;
		}
	}
	int pd[1000]={0};
	for(int j=0;j<str.length();j++){
		if(pd[str[j]]==0){
			if(str[j]!=str[j+str[j]-'0'+1]){
				return false;
			}
			pd[str[j]]=1;
		}		
	}
	return true;
}  
int main(){
	
	for(int i=11223344;i<44332211;i++){
		if(isman(i)){
			cout<<i<<endl;
		}
	} 


	return 0;
}

