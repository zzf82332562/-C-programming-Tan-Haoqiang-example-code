#include<stdio.h>
//测试C语言中Char默认类型 0-127还是0-255
int main ()
{
	char c = 255;
	printf("%d\n",c);	//输出为-1，DEVC++为128位char，其还有-128-0 
	unsigned char C = 255; 
	printf("%d\n",C);	//加无符号输出为正确255 
	return 0;
 } 
