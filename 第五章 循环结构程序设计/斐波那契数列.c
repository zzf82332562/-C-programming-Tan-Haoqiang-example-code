#include<stdio.h>

//计算斐波那契数列 ,公式F1=1 F2=1 Fn=F(n-1)+F(n-2)

int main()
{
	int n1=1,n2=1,n3;
	int num;  //计算到第几个
	int i;
	printf("计算到第几项？\n",num);
	scanf("%d",&num); 
	for(i=0;i<num-2;i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("第%d项结果是%d\n",num,n3);
	return 0;
} 
