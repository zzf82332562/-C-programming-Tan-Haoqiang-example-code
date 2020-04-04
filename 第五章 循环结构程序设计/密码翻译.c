#include<stdio.h>

//密码转换，A变E，z变d这钟类型

int main()
{
	int n,i;
	char c;
	c=getchar();  //getchar是将缓冲区的字符依次读入，也就是说，这里的C只是一个字符，下面的C在循环中会依次读取字符直到换行 
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
