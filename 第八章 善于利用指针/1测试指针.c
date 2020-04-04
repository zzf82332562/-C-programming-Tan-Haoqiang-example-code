#include<stdio.h>

//测试指针效果
//指针变量未被初始化，指针变量就不会被分配存储空间。
//在程序中如果使用了未被分配空间的指针，就会出现难以查找的错误。

int main()
{
	int a,b;
	int *pointer_1,*pointer_2;
	//scanf("%d%d",&a,&b);
	pointer_1 = &a;
	pointer_2 = &b;
	scanf("%d%d",pointer_1,pointer_2);
	printf("这不是指针：%d,%d\n",a,b);
	printf("这是指针：%d,%d\n",*pointer_1,*pointer_2);
	printf("这是地址：%d,%d\n",pointer_1,pointer_2);
	return 0;
} 
