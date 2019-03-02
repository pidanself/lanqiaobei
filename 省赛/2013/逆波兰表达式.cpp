/*
	
标题：逆波兰表达式

    正常的表达式称为中缀表达式，运算符在
	中间，主要是给人阅读的，机器求解并不方便。

    例如：3 + 5 * (2 + 6) - 1

    而且，常常需要用括号来改变运算次序。

    相反，如果使用逆波兰表达式（前缀表达
	式）表示，上面的算式则表示为：

    - + 3 * 5 + 2 6 1

    不再需要括号，机器可以用递归的方法很
	方便地求解。

    为了简便，我们假设：

    1. 只有 + - * 三种运算符
    2. 每个运算数都是一个小于10的非负整数
    
    下面的程序对一个逆波兰表示串进行求值。
    其返回值为一个结构：其中第一元素表示
	求值结果，第二个元素表示它已解析的字
	符数。

struct EV
{
	int result;  //计算结果 
	int n;       //消耗掉的字符数 
};

struct EV evaluate(char* x)
{
	struct EV ev = {0,0};
	struct EV v1;
	struct EV v2;

	if(*x==0) return ev;
	
	if(x[0]>='0' && x[0]<='9'){
		ev.result = x[0]-'0';
		ev.n = 1;
		return ev;
	}
	//- + 3 * 5 + 2 6 1
	v1 = evaluate(x+1);
	v2 =;  //填空位置
	
	if(x[0]=='+') ev.result = v1.result + v2.result;
	if(x[0]=='*') ev.result = v1.result * v2.result;
	if(x[0]=='-') ev.result = v1.result - v2.result;
	ev.n = 1+v1.n+v2.n;

	return ev;
}


请分析代码逻辑，并推测划线处的代码，通过网页提交。
注意：仅把缺少的代码作为答案，千万不要填写多余的
代码、符号或说明文字！！

*/
#include<iostream>
using namespace std;
struct EV
{
	int result;  //计算结果 
	int n;       //消耗掉的字符数 
};

struct EV evaluate(char* x)
{
	struct EV ev = {0,0};
	struct EV v1;
	struct EV v2;

	if(*x==0) return ev;
	
	if(x[0]>='0' && x[0]<='9'){
		ev.result = x[0]-'0';
		ev.n = 1;
		return ev;
	}
	//- + 3 * 5 + 2 6 1
	v1 = evaluate(x+1);
	v2 = evaluate(x+1+v1.n);  //填空位置 没理解为什么这么加 
	
	if(x[0]=='+') ev.result = v1.result + v2.result;
	if(x[0]=='*') ev.result = v1.result * v2.result;
	if(x[0]=='-') ev.result = v1.result - v2.result;
	ev.n = 1+v1.n+v2.n;

	return ev;
}
int main(){

	EV e=evaluate("-+3*5+261");
	cout<<e.result;
	return 0;
}

