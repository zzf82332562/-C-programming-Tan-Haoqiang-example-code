#include<stdio.h>

//����쳲��������� ,��ʽF1=1 F2=1 Fn=F(n-1)+F(n-2)

int main()
{
	int n1=1,n2=1,n3;
	int num;  //���㵽�ڼ���
	int i;
	printf("���㵽�ڼ��\n",num);
	scanf("%d",&num); 
	for(i=0;i<num-2;i++)
	{
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	printf("��%d������%d\n",num,n3);
	return 0;
} 
