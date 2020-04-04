#include<stdio.h>

//定长数组作为参数的函数 

int main()
{
	float average(float array[]);
	float score[10],ave;
	int i;
	printf("input score:\n");
	for(i = 0;i < 10;i++)
	scanf("%f",&score[i]);
	printf("\nave=%.2f",average(score));
	return 0;
}

float average(float array[])
{
	int i;
	float ave = 0;
	for(i = 0;i <10;i++)	ave+= array[i];
	return ave/10;
}
