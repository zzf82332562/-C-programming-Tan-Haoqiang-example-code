#include<stdio.h>

int main()
{
	int i=0;
	while(1)
	{
		printf("%d",i);
		i++; 
		if(i>10) break;  
		//continueֻ����ֹ�˴�ѭ����������ֹȫ��ѭ�� 
	} 
	printf("sys shut down\n");
	return 0;
}
