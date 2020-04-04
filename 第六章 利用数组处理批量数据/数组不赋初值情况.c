#include<stdio.h>

int main()
{
	int a[10],i;  //无初值，数值随机 
	int b[10]={0,1,2};  //有一定初值，后面为0 
	for(i=0 ;i<10 ;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(i=0 ;i<10 ;i++)
	printf("%d\t",b[i]);
	return 0;
} 
