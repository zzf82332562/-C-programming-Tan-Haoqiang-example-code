#include<stdio.h>

int main()
{
	char c;
	for( ; (c = getchar())!='\n' ; )
	printf("%c",c);  //��ʱ'c'������ѭ���ڲ���ֵ 
	return 0;
}
