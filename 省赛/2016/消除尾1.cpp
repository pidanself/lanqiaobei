/*
消除尾一

下面的代码把一个整数的二进制表示的最右边的连续的1全部变成0
如果最后一位是0，则原数字保持不变。

如果采用代码中的测试数据，应该输出：
00000000000000000000000001100111   00000000000000000000000001100000
00000000000000000000000000001100   00000000000000000000000000001100

请仔细阅读程序，填写划线部分缺少的代码。


#include <stdio.h>

void f(int x)
{
	int i;
	for(i=0; i<32; i++) printf("%d", (x>>(31-i))&1);
	printf("   ");
	
	x = _______________________;
	
	for(i=0; i<32; i++) printf("%d", (x>>(31-i))&1);
	printf("\n");	
}

int main()
{
	f(103);
	f(12);
	return 0;
}

注意：只填写缺少的内容，不要书写任何题面已有代码或说明性文字。

*/
#include <stdio.h>

void f(int x)
{
	int i;
	for(i=0; i<32; i++) printf("%d", (x>>(31-i))&1);
	printf("   ");
	
	x =(x+1)&x;
	
	for(i=0; i<32; i++) printf("%d", (x>>(31-i))&1);
	printf("\n");	
}

int main()
{
	f(103);
	f(12);
	return 0;
}

