#include<stdio.h>
#include<string.h>

//���������ж� 

int main()
{
	int i,num=0,last=0;
	char a[100],c; 
	gets(a);
	for(i = 0;(c = a[i]) != '\0'; i++)  //����c=a[i]��������ţ������ʹc��ֵ��Ϊ��=�жϵ����ֵ����0��1 
	{
		if(c == ' ') last = 0;
		else if(last == 0)
		{
			num++;
			last = 1;
		}
	}
	puts(a);  
	printf("words of this text is %d",num); 
	return 0;
} 
