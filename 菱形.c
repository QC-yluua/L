#include<stdio.h>
int main() 
{
	int i,j,k;
	for(i=1;i<=47;i++)
	 {for(j=1;j<=abs(4-i);j++) printf(" ");
	  for(k=1;k<=-abs(2*i-8)+7;k++) printf("*");
	 printf("\n");
	 }
    return 0;
}
