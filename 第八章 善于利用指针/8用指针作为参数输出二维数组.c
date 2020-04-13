#include<stdio.h>

//用指针输出二维数组

int main()
{
	void out();
	int array[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
	int *p = array;
	out(p);
	return 0;
}

void out(int *input)
{
	int i , j;
	for(i = 0; i < 3;i ++)
	{
		for( j = 0;j < 4;j ++,input++)
		printf("%d ",*input);
	}
}
