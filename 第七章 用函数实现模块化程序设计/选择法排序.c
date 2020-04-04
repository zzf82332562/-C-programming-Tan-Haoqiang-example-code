#include<stdio.h>

//选择法排序，函数参数为数组

int main()
{
	void sort(int array[]);
	int number[10],i;
	for(i = 0;i < 10;i++)  scanf("%d",&number[i]);
	sort(number);
	for(i = 0;i < 10;i++)  printf("%d ",number[i]);
	return 0;
}

void sort(int array[])  //数组在子函数中改变直接改变的是该地址的值所以不用赋予返回类型 
{
	int i,j,change;
	for(i = 0;i < 10;i++)
	{
		for(j = i+1;j < 10;j++)
		{
			if(array[i] > array[j])
			{
				change = array[i];  array[i] = array[j];  array[j] =  change;
			}	
		}  
	}
} 
