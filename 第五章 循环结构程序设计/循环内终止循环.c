#include<stdio.h>

int main()
{
	int i=0;
	while(1)
	{
		printf("%d",i);
		i++; 
		if(i>10) break;  
		//continue只是终止此次循环，并不终止全部循环 
	} 
	printf("sys shut down\n");
	return 0;
}
