#include <stdio.h>
//����10������������ֵ 
int main()
{
	int a,b,i;
	scanf("%d",&a);
	b=a; 
	for(i=0 ;i<9 ;i++)
	{
		scanf("%d",&a);
		if(a>b) b=a; 
	}
	printf("max=%d",b);
	return 0;
}
