#include<stdio.h>
#include<stdbool.h> //��Ҫʹ��bool�ͣ�C89�����һ�� 

//����ָ��ָ������һԪ�ص�ֵ

int main()
{
	int input_number(bool b);
	int array[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23};
	int (*p)[4];
	p = array;
	int x,y;
	printf("����Ҫ��ʾԪ�ص��У�\n");
	x = input_number(1);
	printf("����Ҫ��ʾԪ�ص��У�\n");
	y = input_number(0);
	printf("��%d�е�%d�е�ֵΪ��%d",x,y,*(*(p+x-1)+y-1));
	return 0;
} 

int input_number(bool b)  //����ture������ ,false������ 
{
	int a;
	scanf("%d",&a);
	if((a > 3 || a < 1)&& b == true)
	{
		printf("�в���ȷ����������\n");
		a = input_number(1);
	} 
	if((a > 4 || a < 1)&& b == false)
	{
		printf("�в���ȷ����������\n");
		a = input_number(0);
	}
	return a;
}
