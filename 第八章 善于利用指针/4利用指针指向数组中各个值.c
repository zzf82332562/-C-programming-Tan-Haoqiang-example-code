#include<stdio.h>

//����ָ��ָ�������и���ֵ

int main()
{
	int array[10];
	int *p = array;
	int i;
	for (i = 0;i < 10; i ++,p ++)  //��ָ��ָ���ַ��ӽ���λ�� 
	{
		scanf("%d",p);
	}
	p = array;  //������뽫ָ��ָ������Ŀ�ͷ�����������������Ԥ������ 
	for (i = 0;i < 10; i ++,p ++)
	{
		printf("%d ",*p);  //�� * ��ȷ��ָ��������ȷ��ֵ 
	}
	printf("\n");
	return 0;
} 
