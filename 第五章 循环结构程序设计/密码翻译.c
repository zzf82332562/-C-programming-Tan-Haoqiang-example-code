#include<stdio.h>

//����ת����A��E��z��d��������

int main()
{
	int n,i;
	char c;
	c=getchar();  //getchar�ǽ����������ַ����ζ��룬Ҳ����˵�������Cֻ��һ���ַ��������C��ѭ���л����ζ�ȡ�ַ�ֱ������ 
	while(c!='\n')
	{
		if((c>='a' && c<='z') || (c>='A' && c<='Z'))
		{
			if((c>='w' && c<='z') || (c>='W' && c<='Z'))
				c-=22;
			else c+=4;
		}
		printf("%c",c);
		c=getchar(); 
	}
	printf("\n");
	return 0;
} 
