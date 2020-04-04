#include<stdio.h>
#include<string.h>

//strncpy函数使用测试，测试是否拷贝了/0

int main()
{
	char a[6] = "china"; 
	char b[4] = "abcde";
	strncpy(a,b,2);
	puts(a);  //输出为 abina 即不拷贝 \0 
	printf("%c←",a[6]); 
	return 0;
} 
