#include <stdio.h>
//#include <math.h>
//��һԪ���η��̵ĸ�AX2+BX+C=0
//���ù�ʽX= ��-b��������bƽ��-4AC��/2A 
int main()
{
	int a=1,b=3,c=1;
	int x;
	if (b*b-4*a*c<0) printf("�޽�");
	else if (b*b-4*a*c==0) {x=(-b+sqrt(b*b-4*a*c)/(2*a)); printf("x=%d\n",x);	}
	else {x=(-b+sqrt(b*b-4*a*c)/(2*a)); printf("x1=%d\n",x);
		  x=(-b-sqrt(b*b-4*a*c)/(2*a)); printf("x2=%d\n",x);	}
	return 0;	  
}
