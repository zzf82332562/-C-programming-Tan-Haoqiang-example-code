#include<stdio.h>
#include<math.h>

//��ʽ ��/4 = 1-1/3+1/5-1/7+... 

int main()
{
	int sign = 1;  //��ֵ�������� 
	double pi = 0,n = 1,term = 1;  //piԭʼֵ��n��ĸ��tern�����ֵ
	int i = 0;  //ѭ������ 
	while (fabs(term)>=1e-6)  //��ȷ�ȵ�10^-6 ��fabs()��˫���Ⱦ���ֵ��abs()����������ֵ 
	{
		pi = pi +term;
		n += 2;
		sign = -sign;
		term = sign / n;
		i += 1; 
	} 
	pi = pi * 4;
	printf("pi=%10.8f\n",pi);
	printf("ѭ������%d��\n",i);
	return 0;
} 
