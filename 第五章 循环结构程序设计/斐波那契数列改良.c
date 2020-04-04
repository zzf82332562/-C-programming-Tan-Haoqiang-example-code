#include<stdio.h>

//计算斐波那契数列 ,公式F1=1 F2=1 Fn=F(n-1)+F(n-2)
//算法改良版 

int main()
{
	int n1=1,n2=1; 
	int num;  //计算到第几个
	int i;
	printf("计算到第几项？\n",num);
	scanf("%d",&num); 
	for(i=0;i<num/2-1;i++)  //其他是错误的，只有这个算法正确，但一次要输出两个数据，需添加判断，没时间不搞了 
	{
		n1 = n1 + n2;
		n2 = n2 + n1;
	}
	if(num % 2 == 0) n1 = n2;
	printf("第%d项结果是%d\n",num,n1);
	return 0;
} 
