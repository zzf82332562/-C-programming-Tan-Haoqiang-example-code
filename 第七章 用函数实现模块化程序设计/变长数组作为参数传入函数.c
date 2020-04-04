#include<stdio.h>

//可变长数组作为参数的函数 

int main()
{
	float average(float array[],int num);  //添加一个参数 i 即可 
	float score1[10],score2[5],ave;
	int i;
	printf("input score1:\n");
	for(i = 0;i < 10;i++)	scanf("%f",&score1[i]);
	printf("\nave=%.2f\n",average(score1,10));
	printf("input score2:\n");
	for(i = 0;i < 5;i++)	scanf("%f",&score2[i]);
	printf("\nave=%.2f\n",average(score2,5));
	return 0;
}

float average(float array[],int num)
{
	int i; 
	float ave = 0;
	for(i = 0;i <num;i++)	ave+= array[i];
	return ave/num;
}
