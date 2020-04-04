#include<stdio.h>

//指针作为函数参数示例2

int main()
{
	void compare();
	void change();
	int i,j;
	int *input_1 = &i,*input_2 = &j;
	printf("Please input two number:\n");
	scanf("%d%d",&i,&j);  //这里与1不同 
	compare(input_1,input_2);
	change(input_1,input_2);
	printf("After change number are:  %d,%d\n",i,j);
	printf("After change *number are:  %d,%d\n",*input_1,*input_2);
	return 0;
} 

void compare(int *x,int *y)
{
	printf("The big number is %d.\n",*x>*y?*x:*y);
}

void change(int *x,int *y)
{
	int change;
	change = *x;
	printf("X address=%d.\n",x);
	*x = *y;
	*y = change;
	printf("Change complete.\n");
}
