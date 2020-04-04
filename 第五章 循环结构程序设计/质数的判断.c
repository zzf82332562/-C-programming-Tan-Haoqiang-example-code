#include<stdio.h>
#include<math.h>
//质数判断

int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=2 ;i<=sqrt(n) ;i++ )
		if(n%i == 0) break;
	if(i<=sqrt(n)) printf("NO\n");  // 被除数在2~根号N内即可判断 
	else printf("YES\n");
	
	int num;  //3-200质数 
	for(num=3 ;num<200 ;num+=2 )  //偶数不需要判断 
	{
		for(i=2 ;i<=sqrt(num) ;i++ )
			if(num%i == 0) break;
		if(i>sqrt(num)) printf("%d\t",num);
	} 
	
	return 0; 
} 
