#include<stdio.h>
#include<math.h>
int main ()
{
	int m,a,b,c,d; 
	printf("������һ����λ����");
	scanf("%d",&m);
	a=m/100;
	b=(m%100)/10;
	c=m%10;
	d=100*c+10*b+a;
	printf("�����֣�d=%d\n",d);
	return 0;
}
