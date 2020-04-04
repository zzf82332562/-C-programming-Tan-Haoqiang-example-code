#include<stdio.h>

//利用指针指向数组中各个值

int main()
{
	int array[10];
	int *p = array;
	int i;
	for (i = 0;i < 10; i ++,p ++)  //将指针指向地址相加进行位移 
	{
		scanf("%d",p);
	}
	p = array;  //这里必须将指针指向数组的开头，否则输出出错，不可预见错误 
	for (i = 0;i < 10; i ++,p ++)
	{
		printf("%d ",*p);  //加 * 号确保指向数组正确的值 
	}
	printf("\n");
	return 0;
} 
