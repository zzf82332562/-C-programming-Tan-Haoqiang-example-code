#include<stdio.h>

//static�����Ĵ洢��ʽ�о�

int main()
{
	int f(int);
	int a =2,i;
	for(i = 0;i < 3;i++)
	{
		printf("%d\n",f(a));
	}
	return 0;
} 

int f(int input)
{
	auto int b = 0;
	static c = 3;  //�����ٴε���ʱ�������¸���ֵ�����Ǳ�����һ�ε��ý���ʱ��ֵ 
	b++;
	c++;
	static d;  //�������ֵ����
	printf("�����ֵ����%d\n",d++);  //��һ�θ�ֵΪ0	 
	return (input + b + c);
}
