#include<stdio.h>

//指针作为函数参数示例

int main()
{
	void compare();
	void change();
	int i,j;
	int *input_1 = &i,*input_2 = &j;
	printf("Please input two number:\n");
	scanf("%d%d",input_1,input_2);
	compare(input_1,input_2);
	printf("Before change those number was:  %d,%d\n",*input_1,*input_2);
	printf("Before address:  %d,%d\n",input_1,input_2);
	change(input_1,input_2);
	printf("After address:  %d,%d\n",input_1,input_2);  //实参并不随形参变化而变化，就算是指针也是如此 
	printf("After change those number are:  %d,%d\n",*input_1,*input_2);
	return 0;
} 

void compare(int *x,int *y)
{
	printf("The big number is %d.\n",*x>*y?*x:*y);
}

void change(int *x,int *y)
{
	int *change;
	printf("Before change those number address was:  %d,%d\n",x,y);
	change = x;
	printf("change address=%d.\n",change);
	x = y;
	y = change;
	printf("After change those number address are:  %d,%d\n",x,y);
	printf("Change complete.\n");
}
