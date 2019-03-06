/*
九数组分数

1,2,3...9 这九个数字组成一个分数，
其值恰好为1/3，如何组法？

下面的程序实现了该功能，请填写划线
部分缺失的代码。

#include <stdio.h>

void test(int x[])
{
	int a = x[0]*1000 + x[1]*100 + x[2]*10 + x[3];
	int b = x[4]*10000 + x[5]*1000 + x[6]*100 + x[7]*10 + x[8];
	
	if(a*3==b) printf("%d / %d\n", a, b);
}

void f(int x[], int k)
{
	int i,t;
	if(k>=9){
		test(x);
		return;
	}
	
	for(i=k; i<9; i++){
		{t=x[k]; x[k]=x[i]; x[i]=t;}
		f(x,k+1);
		_____________________________________________ // 填空处
	}
}
	
int main()
{
	int x[] = {1,2,3,4,5,6,7,8,9};
	f(x,0);	
	return 0;
}


注意：只填写缺少的内容，不要书写任
何题面已有代码或说明性文字。

*/
#include <stdio.h>

void test(int x[])
{
	int a = x[0]*1000 + x[1]*100 + x[2]*10 + x[3];
	int b = x[4]*10000 + x[5]*1000 + x[6]*100 + x[7]*10 + x[8];
	
	if(a*3==b) printf("%d / %d\n", a, b);
}

void f(int x[], int k)
{
	int i,t;
	if(k>=9){
		test(x);
		return;
	}
	
	for(i=k; i<9; i++){
		{t=x[k]; x[k]=x[i]; x[i]=t;}
		f(x,k+1);
		{t=x[k]; x[k]=x[i]; x[i]=t;} // 填空处
	}
}
	
int main()
{
	int x[] = {1,2,3,4,5,6,7,8,9};
	f(x,0);	
	return 0;
}
