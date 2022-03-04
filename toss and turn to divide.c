#include<stdio.h>
int divide(int m,int n)
{
if(m%n==0)
return n;
divide(n,m%n);

}



void main()
{
int a,b,c,d;
scanf("%d%d",&a,&b);
c=divide(a,b);
d=a*b/c;
printf("最大公约数%d，最小公倍数%d",c,d);



}
