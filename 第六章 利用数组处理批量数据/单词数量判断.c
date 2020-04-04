#include<stdio.h>
#include<string.h>

//单词数量判断 

int main()
{
	int i,num=0,last=0;
	char a[100],c; 
	gets(a);
	for(i = 0;(c = a[i]) != '\0'; i++)  //这里c=a[i]必须加括号，否则会使c的值变为！=判断的真假值，即0或1 
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
