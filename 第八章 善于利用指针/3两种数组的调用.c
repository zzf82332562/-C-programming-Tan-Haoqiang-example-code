#include<stdio.h>

//������������ĵ��ã�����ָ�� 

int main()
{
	int a[5] = {1,2,3,4,5};
	int *p = a;
	printf("a[0]�ĵ�ַ=%x\n",a);
	printf("a[1]�ĵ�ַ=%x\n",a+1);
	printf("��һ�ֵ���a[3]�ĵ�ַ=%x\n",a+3);
	printf("��һ�ֵ���a[3]=%d\n",*p+3);
	printf("�ڶ��ֵ���a[3]=%d\n",a[3]);
} 
