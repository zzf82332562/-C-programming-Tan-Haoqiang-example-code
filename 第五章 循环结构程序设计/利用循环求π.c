#include<stdio.h>
#include<math.h>

//公式 π/4 = 1-1/3+1/5-1/7+... 

int main()
{
	int sign = 1;  //数值符号正负 
	double pi = 0,n = 1,term = 1;  //pi原始值，n分母，tern该项的值
	int i = 0;  //循环次数 
	while (fabs(term)>=1e-6)  //精确度到10^-6 ，fabs()求双精度绝对值，abs()求整数绝对值 
	{
		pi = pi +term;
		n += 2;
		sign = -sign;
		term = sign / n;
		i += 1; 
	} 
	pi = pi * 4;
	printf("pi=%10.8f\n",pi);
	printf("循环次数%d次\n",i);
	return 0;
} 
