#include <stdio.h>

	//�ⲿ�������ò��� 

int A; 

int main() {
	int power(int);
	int b = 3,c,d,m;
	printf("��������ֵA,B������A*3  A^B��ֵ��\n");
	scanf("%d%d",&A,&m);
	c = A*b;
	printf("%d*%d = %d\n",A,b,c);
	d = power(m);
	printf("%d^%d = %d\n",A,m,d);
	return 0;
}
