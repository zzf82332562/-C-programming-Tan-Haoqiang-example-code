#include<stdio.h>
#include<math.h>
//�����ж�

int main()
{
	int i,n;
	scanf("%d",&n);
	for(i=2 ;i<=sqrt(n) ;i++ )
		if(n%i == 0) break;
	if(i<=sqrt(n)) printf("NO\n");  // ��������2~����N�ڼ����ж� 
	else printf("YES\n");
	
	int num;  //3-200���� 
	for(num=3 ;num<200 ;num+=2 )  //ż������Ҫ�ж� 
	{
		for(i=2 ;i<=sqrt(num) ;i++ )
			if(num%i == 0) break;
		if(i>sqrt(num)) printf("%d\t",num);
	} 
	
	return 0; 
} 
