#include<stdio.h>

//����ָ��Ч��
//ָ�����δ����ʼ����ָ������Ͳ��ᱻ����洢�ռ䡣
//�ڳ��������ʹ����δ������ռ��ָ�룬�ͻ�������Բ��ҵĴ���

int main()
{
	int a,b;
	int *pointer_1,*pointer_2;
	//scanf("%d%d",&a,&b);
	pointer_1 = &a;
	pointer_2 = &b;
	scanf("%d%d",pointer_1,pointer_2);
	printf("�ⲻ��ָ�룺%d,%d\n",a,b);
	printf("����ָ�룺%d,%d\n",*pointer_1,*pointer_2);
	printf("���ǵ�ַ��%d,%d\n",pointer_1,pointer_2);
	return 0;
} 
