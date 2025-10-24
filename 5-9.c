#include <stdio.h>
int main() 
{
	int n,i,a=0;
	for(n=1;n<=1000;n++)
	{
	for(i=1;i<=n/2;i++) 
	{
	 if(n%i==0) 
	 a=a+i;
	}
	if(a==n) 
	{
	   printf("%dÊÇ¡°ÍêÊý¡±\n",n);
	   printf("%d its factors are ",n);
	   for(i=1;i<=n/2;i++) 
	   {
	    if(n%i==0) 
	    printf("%d ",i);
	   }
	   printf("\n");
	} 
	a=0;
	}
    return 0;
}
