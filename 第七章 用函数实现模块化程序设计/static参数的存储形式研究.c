#include<stdio.h>

//static参数的存储形式研究

int main()
{
	int f(int);
	int a =2,i;
	for(i = 0;i < 3;i++)
	{
		printf("%d\n",f(a));
	}
	return 0;
} 

int f(int input)
{
	auto int b = 0;
	static c = 3;  //程序被再次调用时不再重新赋初值，而是保留上一次调用结束时的值 
	b++;
	c++;
	static d;  //不赋予初值测试
	printf("赋予初值测试%d\n",d++);  //第一次赋值为0	 
	return (input + b + c);
}
