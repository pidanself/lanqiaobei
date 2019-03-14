/*
ans=26
生日蜡烛

某君从某年开始每年都举办一次
生日party，并且每次都要吹熄与
年龄相同根数的蜡烛。

现在算起来，他一共吹熄了236根蜡烛。

请问，他从多少岁开始过生日party的？

请填写他开始过生日party的年龄数。
注意：你提交的应该是一个整数，不
要填写任何多余的内容或说明性文字。

*/ 
#include<iostream>
#include<algorithm> 
using namespace std;

int main(){
	for(int i=1;i<=200;i++){
		int ans=0;
		int j=i;
		while(ans<=236){
			ans+=j++;
			if(ans==236){
				cout<<i<<" "<<j<<endl;
				break;				
			}
		}
	}

	return 0;
}

