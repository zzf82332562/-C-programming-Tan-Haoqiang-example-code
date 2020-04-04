#include<stdio.h>
//sizeof测试数据长度 
int main()
{
	short i,j,k,l;
	int a=0;
	long b=0;
	short c=0;
	long long d =0;
	unsigned int e = -30;  //输出结果是-1，说明这里无符号整形也能储存-1，问题不明 
	i=sizeof(a);
	j=sizeof(b);
	k=sizeof(c);
	l=sizeof(d);
	printf("int=%d\n",i);
	printf("long=%d\n",j);
	printf("short=%d\n",k);
	printf("long long=%d\n",l);
	printf("值unsigned int=%u\n",e);
	return 0;
 } 
