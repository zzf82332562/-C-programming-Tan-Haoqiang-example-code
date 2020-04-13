#include<stdio.h>
#include<stdbool.h> //若要使用bool型，C89需加这一库 

//数组指向指定行列一元素的值

int main()
{
	int input_number(bool b);
	int array[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
	int (*p)[4];
	p = array;
	int x,y;
	printf("输入要显示元素的行：\n");
	x = input_number(1);
	printf("输入要显示元素的列：\n");
	y = input_number(0);
	printf("第%d行第%d列的值为：%d",x,y,*(*(p+x-1)+y-1));
	return 0;
} 

int input_number(bool b)  //参数ture代表行 ,false代表列 
{
	int a;
	scanf("%d",&a);
	if((a > 3 || a < 1)&& b == true)
	{
		printf("行不正确，重新输入\n");
		a = input_number(1);
	} 
	if((a > 4 || a < 1)&& b == false)
	{
		printf("列不正确，重新输入\n");
		a = input_number(0);
	}
	return a;
}
