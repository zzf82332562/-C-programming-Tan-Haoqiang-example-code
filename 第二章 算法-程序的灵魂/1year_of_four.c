#include <stdio.h>
//输出闰年
//满足以下条件均为闰年
//①能被4整除但不能被100整除
//②能被100整除且能被400整除 
int main()
{
	int i;
	for(i = 1900;i<=2000;i++)
	{
		if( (i%4==0 && i%100!=0 ) || (i%100==0 && i%400==0))
		printf("%d\n",i);
	}
	return 0;
}
