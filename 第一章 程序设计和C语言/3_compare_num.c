#include <stdio.h>
//�����������нϴ��� 
int main()
{
	int max(int x, int y);	//���������ú���max
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
