/*

���������

StringInGrid��������һ��ָ����С�ĸ���
�д�ӡָ�����ַ�����
Ҫ���ַ�����ˮƽ����ֱ���������϶����С�
����ַ���̫�����ͽضϡ�
�������ǡ�þ��У���������ƫ�����ƫ��һ�㡣

����ĳ���ʵ������߼�������д���߲���ȱ��
�Ĵ��롣

#include <stdio.h>
#include <string.h>

void StringInGrid(int width, int height, const char* s)
{
	int i,k;
	char buf[1000];
	strcpy(buf, s);
	if(strlen(s)>width-2) buf[width-2]=0;
	
	printf("+");
	for(i=0;i<width-2;i++) printf("-");
	printf("+\n");
	
	for(k=1; k<(height-1)/2;k++){
		printf("|");
		for(i=0;i<width-2;i++) printf(" ");
		printf("|\n");
	}
	
	printf("|");
	
	printf("%*s%s%*s",��������);  //���
	          
	printf("|\n");
	
	for(k=(height-1)/2+1; k<height-1; k++){
		printf("|");
		for(i=0;i<width-2;i++) printf(" ");
		printf("|\n");
	}	
	
	printf("+");
	for(i=0;i<width-2;i++) printf("-");
	printf("+\n");	
}

int main()
{
	StringInGrid(20,6,"abcd1234");
	return 0;
}

������Ŀ�����ݣ�Ӧ�������
+------------------+
|                  |
|     abcd1234     |
|                  |
|                  |
+------------------+

��������ֶ������⣬�ο���ͼ1.jpg����


ע�⣺ֻ��дȱ�ٵ����ݣ���Ҫ��д�κ�
�������д����˵�������֡�

*/ 
#include <stdio.h>
#include <string.h>

void StringInGrid(int width, int height, const char* s)
{
	int i,k;
	char buf[1000];
	strcpy(buf, s);
	if(strlen(s)>width-2) buf[width-2]=0;
	
	printf("+");
	for(i=0;i<width-2;i++) printf("-");
	printf("+\n");
	
	for(k=1; k<(height-1)/2;k++){
		printf("|");
		for(i=0;i<width-2;i++) printf(" ");
		printf("|\n");
	}
	
	printf("|");
	
	printf("%*s%s%*s",(width-2-strlen(s))/2,"",buf,((width-2-strlen(s))%2==0)?((width-2-strlen(s))/2):((width-2-strlen(s))/2+1),"");  //���
	          
	printf("|\n");
	
	for(k=(height-1)/2+1; k<height-1; k++){
		printf("|");
		for(i=0;i<width-2;i++) printf(" ");
		printf("|\n");
	}	
	
	printf("+");
	for(i=0;i<width-2;i++) printf("-");
	printf("+\n");	
}

int main()
{
	StringInGrid(20,6,"abcd1234");
	return 0;
}

