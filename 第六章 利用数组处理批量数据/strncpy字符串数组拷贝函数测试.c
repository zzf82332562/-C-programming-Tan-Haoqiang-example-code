#include<stdio.h>
#include<string.h>

//strncpy����ʹ�ò��ԣ������Ƿ񿽱���/0

int main()
{
	char a[6] = "china"; 
	char b[4] = "abcde";
	strncpy(a,b,2);
	puts(a);  //���Ϊ abina �������� \0 
	printf("%c��",a[6]); 
	return 0;
} 
