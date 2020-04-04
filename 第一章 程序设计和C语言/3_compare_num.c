#include <stdio.h>
//求两个整数中较大者 
int main()
{
	int max(int x, int y);	//声明被调用函数max
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("max=%d\n",c);
	return 0; 
}

//max
int max(int x, int y)
{
	int z;
	if(x>y) z=x;
	else z=y;
	return z;
}
