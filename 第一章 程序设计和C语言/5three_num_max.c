#include <stdio.h>

int main()
{
	int a,b,c,m;
	int max(int a, int b, int c);
	scanf("%d,%d,%d",&a,&b,&c);
	m=max(a,b,c);
	printf("max=%d\n",m);
	return 0;
}

int max(int x, int y ,int z)
{
	int compare;
	if(x > y) compare = x;
	else compare = y;
	if(z > compare) compare = z;
	return (compare);
}
