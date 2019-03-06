/*
牌型种数

小明被劫持到X赌城，被迫与其他3人玩牌。
一副扑克牌（去掉大小王牌，共52张），
均匀发给4个人，每个人13张。
这时，小明脑子里突然冒出一个问题：
如果不考虑花色，只考虑点数，也不考虑
自己得到的牌的先后顺序，自己手里能拿到
的初始牌型组合一共有多少种呢？

请填写该整数，不要填写任何多余的内容或说明文字。
张数   方案数 
1 		13
2		13+C（2，13）
3		C（13，52）
*/ 
#include<iostream>
using namespace std;
int ans=0;
void f(int k,int cnt){
	if(cnt>13||k>14)return;
	
	if(cnt==13){
		ans++;
		return;
	}
	for(int i=0;i<5;i++){
		f(k+1,cnt+i);
	}
}
int main(){
	
	f(1,0);
	cout<<ans;
	return 0;
}

