#include<stdio.h>

//ָ����Ϊ��������ʾ��

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
	printf("After address:  %d,%d\n",input_1,input_2);  //ʵ�β������βα仯���仯��������ָ��Ҳ����� 
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
