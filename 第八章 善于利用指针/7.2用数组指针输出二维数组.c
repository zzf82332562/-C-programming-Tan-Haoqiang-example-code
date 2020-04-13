#include<stdio.h>

//用数组指针输出二维数组

int main()
{
	int array[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
	int i , j;
	for(i = 0; i < 3;i ++)
	{
		for( j = 0;j < 4;j ++)
			printf("%d ",*(*(array+i)+j));
	}
	return 0;
}
