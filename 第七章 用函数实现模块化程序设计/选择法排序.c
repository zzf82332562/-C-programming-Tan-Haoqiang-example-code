#include<stdio.h>

//ѡ�����򣬺�������Ϊ����

int main()
{
	void sort(int array[]);
	int number[10],i;
	for(i = 0;i < 10;i++)  scanf("%d",&number[i]);
	sort(number);
	for(i = 0;i < 10;i++)  printf("%d ",number[i]);
	return 0;
}

void sort(int array[])  //�������Ӻ����иı�ֱ�Ӹı���Ǹõ�ַ��ֵ���Բ��ø��践������ 
{
	int i,j,change;
	for(i = 0;i < 10;i++)
	{
		for(j = i+1;j < 10;j++)
		{
			if(array[i] > array[j])
			{
				change = array[i];  array[i] = array[j];  array[j] =  change;
			}	
		}  
	}
} 
