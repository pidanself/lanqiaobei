/*

标题：锦标赛

   如果要在n个数据中挑选出第一大
   和第二大的数据（要求输出数据
   所在位置和值），使用什么方法
   比较的次数最少？我们可以从体
   育锦标赛中受到启发。

   如图【1.png】所示，8个选手的
   锦标赛，先两两捉对比拼，淘汰
   一半。优胜者再两两比拼...直到
   决出第一名。

   第一名输出后，只要对黄色标示
   的位置重新比赛即可。

   下面的代码实现了这个算法（假设
   数据中没有相同值）。

   代码中需要用一个数组来表示图中
   的树（注意，这是个满二叉树，不
   足需要补齐）。它不是存储数据本
   身，而是存储了数据的下标。   
   
   第一个数据输出后，它所在的位置
   被标识为-1

//重新决出k号位置，v为已输出值 
void pk(int* a, int* b, int n, int k, int v)
{
	int k1 = k*2 + 1;
	int k2 = k1 + 1;
	
	if(k1>=n || k2>=n){
		b[k] = -1;
		return;
	}
	
	if(b[k1]==v) 
		pk(a,b,n,k1,v);
	else
		pk(a,b,n,k2,v);
	
	//重新比较
	if(b[k1]<0){
		if(b[k2]>=0)
			b[k] = b[k2]; 
		else
			b[k] = -1;
		return;
	}
	
	if(b[k2]<0){
		if(b[k1]>=0)
			b[k] = b[k1]; 
		else
			b[k] = -1;
		return;
	}
	
	if(______________________) //填空
		b[k] = b[k1];
	else
		b[k] = b[k2];
}

//对a中数据，输出最大，次大元素位置和值 
void f(int* a, int len)
{
	int n = 1;
	while(n<len) n *= 2;
	
	int* b = (int*)malloc(sizeof(int*) * (2*n-1));
	int i;
	for(i=0; i<n; i++){ 
		if(i<len) 
			b[n-1+i] = i;
		else
			b[n-1+i] = -1;
	}
	
	//从最后一个向前处理
	for(i=2*n-1-1; i>0; i-=2){
		if(b[i]<0){
			if(b[i-1]>=0)
				b[(i-1)/2] = b[i-1]; 
			else
				b[(i-1)/2] = -1;
		}
		else{
			if(a[b[i]]>a[b[i-1]])
				b[(i-1)/2] = b[i];
			else
				b[(i-1)/2] = b[i-1];
		}
	}
	
	//输出树根
	printf("%d : %d\n", b[0], a[b[0]]);
	
	//值等于根元素的需要重新pk
	pk(a,b,2*n-1,0,b[0]);
	
	//再次输出树根
	printf("%d : %d\n", b[0], a[b[0]]);
	
	free(b);
}


int main()
{
	int a[] = {54,55,18,16,122,17,30,9,58};
	f(a,9);	
}

    请仔细分析流程，填写缺失的代码。

    通过浏览器提交答案，只填写缺失的代码，不要填写已有代码或其它说明语句等。




*/
#include<iostream>
using namespace std;

//重新决出k号位置，v为已输出值 
void pk(int* a, int* b, int n, int k, int v)
{
	int k1 = k*2 + 1;
	int k2 = k1 + 1;
	
	if(k1>=n || k2>=n){
		b[k] = -1;
		return;
	}
	
	if(b[k1]==v) 
		pk(a,b,n,k1,v);
	else
		pk(a,b,n,k2,v);
	
	//重新比较
	if(b[k1]<0){
		if(b[k2]>=0)
			b[k] = b[k2]; 
		else
			b[k] = -1;
		return;
	}
	
	if(b[k2]<0){
		if(b[k1]>=0)
			b[k] = b[k1]; 
		else
			b[k] = -1;
		return;
	}
	
	if() //填空
		b[k] = b[k1];
	else
		b[k] = b[k2];
}

//对a中数据，输出最大，次大元素位置和值 
void f(int* a, int len)
{
	int n = 1;
	while(n<len) n *= 2;
	
	int* b = (int*)malloc(sizeof(int*) * (2*n-1));
	int i;
	for(i=0; i<n; i++){ 
		if(i<len) 
			b[n-1+i] = i;
		else
			b[n-1+i] = -1;
	}
	
	//从最后一个向前处理
	for(i=2*n-1-1; i>0; i-=2){
		if(b[i]<0){
			if(b[i-1]>=0)
				b[(i-1)/2] = b[i-1]; 
			else
				b[(i-1)/2] = -1;
		}
		else{
			if(a[b[i]]>a[b[i-1]])
				b[(i-1)/2] = b[i];
			else
				b[(i-1)/2] = b[i-1];
		}
	}
	
	//输出树根
	printf("%d : %d\n", b[0], a[b[0]]);
	
	//值等于根元素的需要重新pk
	pk(a,b,2*n-1,0,b[0]);
	
	//再次输出树根
	printf("%d : %d\n", b[0], a[b[0]]);
	
	free(b);
}


int main()
{
	int a[] = {54,55,18,16,122,17,30,9,58};
	f(a,9);	
}
