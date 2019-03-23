#include<iostream>
using namespace std;

char* prefix(char* haystack_start, char* needle_start)
{
	char* haystack = haystack_start;
	char* needle = needle_start;

	
	while((*haystack) && (*needle)){
		if(*(haystack++)!=*(needle++)) return NULL;  //Ìî¿ÕÎ»ÖÃ
	}
	
	if(*needle) return NULL;
	
	return haystack_start;
}

int main(){
	cout<<prefix("abc","abcd");

	return 0;
}
