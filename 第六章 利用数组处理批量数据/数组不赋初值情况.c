#include<stdio.h>

int main()
{
	int a[10],i;  //�޳�ֵ����ֵ��� 
	int b[10]={0,1,2};  //��һ����ֵ������Ϊ0 
	for(i=0 ;i<10 ;i++)
	printf("%d\t",a[i]);
	printf("\n");
	for(i=0 ;i<10 ;i++)
	printf("%d\t",b[i]);
	return 0;
} 
