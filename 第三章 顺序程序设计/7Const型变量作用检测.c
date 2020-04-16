#include<stdio.h>

//const 型变量作用检测

int main()
{
	const int i = 5;
	//i+=1; 编译器报错，不能更改 i 的值 
	printf("输入i++语句后编译器报错i仍是%d\n",i);
	scanf("%d",&i);
	printf("键盘更改后i：%d ，所以知识在编译阶段不允许更改，通过指针办法可以更改\n",i);
	return 0;
} 
