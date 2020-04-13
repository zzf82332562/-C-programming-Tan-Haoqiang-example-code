#include<stdio.h>

//数组按相反顺序存放

int main()
{
	void swap();
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int *p = array;
	int i,j;
	printf("The original array:\n");
	for(i = 0;i < 10;i++)
	printf("%d ",*(p+i));
	p = array;  //重置指针 
	swap(p,10);
	printf("After swap array:\n");
	p = array;
	for(i = 0;i < 10;i++)
	printf("%d ",*(p+i));
	return 0;
} 

void swap(int *input , int n)
{
	int i,j,c;
		for (i = 0,j = 1;i < n/2;i ++,j ++)
		{
			c = *(input+i);
			*(input+i) = *(input+n-j);
			*(input+n-j) = c;
		}
}
