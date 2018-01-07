#include <stdio.h>
int main (){
	unsigned int a,i,j,b,s;
	scanf("%d",&a);
	s=0;
	for(i=1;i<=a;i++)
	{b=0;
	for(j=1;j<=i;j++)
	{
	b=b+j;
	}
	s=s+b;
	
	}
printf ("%d",s);
	return 0;
}
