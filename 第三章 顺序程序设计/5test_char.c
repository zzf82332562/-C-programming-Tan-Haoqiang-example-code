#include<stdio.h>
//����C������CharĬ������ 0-127����0-255
int main ()
{
	char c = 255;
	printf("%d\n",c);	//���Ϊ-1��DEVC++Ϊ128λchar���仹��-128-0 
	unsigned char C = 255; 
	printf("%d\n",C);	//���޷������Ϊ��ȷ255 
	return 0;
 } 
