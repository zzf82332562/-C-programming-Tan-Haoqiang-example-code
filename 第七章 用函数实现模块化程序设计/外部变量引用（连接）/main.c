#include <stdio.h>

	//外部变量引用测试 

int A; 

int main() {
	int power(int);
	int b = 3,c,d,m;
	printf("输入两个值A,B，计算A*3  A^B的值：\n");
	scanf("%d%d",&A,&m);
	c = A*b;
	printf("%d*%d = %d\n",A,b,c);
	d = power(m);
	printf("%d^%d = %d\n",A,m,d);
	return 0;
}
