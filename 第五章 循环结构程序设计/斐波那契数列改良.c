#include<stdio.h>

//����쳲��������� ,��ʽF1=1 F2=1 Fn=F(n-1)+F(n-2)
//�㷨������ 

int main()
{
	int n1=1,n2=1; 
	int num;  //���㵽�ڼ���
	int i;
	printf("���㵽�ڼ��\n",num);
	scanf("%d",&num); 
	for(i=0;i<num/2-1;i++)  //�����Ǵ���ģ�ֻ������㷨��ȷ����һ��Ҫ����������ݣ�������жϣ�ûʱ�䲻���� 
	{
		n1 = n1 + n2;
		n2 = n2 + n1;
	}
	if(num % 2 == 0) n1 = n2;
	printf("��%d������%d\n",num,n1);
	return 0;
} 
