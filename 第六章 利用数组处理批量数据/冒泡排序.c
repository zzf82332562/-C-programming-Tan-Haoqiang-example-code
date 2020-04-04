#include<stdio.h>

//Ã°Åİ·¨ÅÅĞò£¨ÉıĞò£© 

int main()
{
	int i,j,n;
	int num[10]={34,67,90,43,124,87,65,99,132,26};
	for(i = 0;i < 9;i++)
	{
		for(j = 0;j < 9-i;j++)
		if(num[j]>num[j+1])
		{
			n = num[j];
			num[j] = num[j+1];
			num[j+1] = n;			
		} 
	}
	for(i = 0;i < 10;i++)
	printf("%d ",num[i]);
	return 0;
} 
