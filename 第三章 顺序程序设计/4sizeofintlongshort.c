#include<stdio.h>
//sizeof�������ݳ��� 
int main()
{
	short i,j,k,l;
	int a=0;
	long b=0;
	short c=0;
	long long d =0;
	unsigned int e = -30;  //��������-1��˵�������޷�������Ҳ�ܴ���-1�����ⲻ�� 
	i=sizeof(a);
	j=sizeof(b);
	k=sizeof(c);
	l=sizeof(d);
	printf("int=%d\n",i);
	printf("long=%d\n",j);
	printf("short=%d\n",k);
	printf("long long=%d\n",l);
	printf("ֵunsigned int=%u\n",e);
	return 0;
 } 
