#include<stdio.h>

//��ָ�������ά����

int main()
{
	int array[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
	int *p = array;
	int i , j;
	for(i = 0; i < 3;i ++)
	{
		for( j = 0;j < 4;j ++,p++)
			printf("%d ",*p);
	}
	return 0;
}
