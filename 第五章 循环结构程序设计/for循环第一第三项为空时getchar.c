#include<stdio.h>

int main()
{
	char c;
	for( ; (c = getchar())!='\n' ; )
	printf("%c",c);  //此时'c'必须在循环内才有值 
	return 0;
}
