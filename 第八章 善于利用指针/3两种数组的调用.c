#include<stdio.h>

//测试两种数组的调用，不含指针 

int main()
{
	int a[5] = {1,2,3,4,5};
	int *p = a;
	printf("a[0]的地址=%x\n",a);
	printf("a[1]的地址=%x\n",a+1);
	printf("第一种调用a[3]的地址=%x\n",a+3);
	printf("第一种调用a[3]=%d\n",*p+3);
	printf("第二种调用a[3]=%d\n",a[3]);
} 
