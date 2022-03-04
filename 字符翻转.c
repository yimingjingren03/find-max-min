#include<stdio.h>

int aba()
{
	char a;
	scanf("%c",&a);
	if(a=='\n')
	{	printf("%c",a);
	return 0;}
	 aba();
printf("%c",a);
}


void main()
{
aba();



}
