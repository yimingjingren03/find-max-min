#include<stdio.h>
void main()
{
int t,m,n,i;
scanf("%d%d",&m,&n);
if(m<n)
{
t=m;
m=n;
n=t;
}
for(i=n;m%i!=0||n%i!=0;i--)
;
printf("最大公约数%d",i);
for(i=m;(i%m!=0)||(i%n!=0);i++)
;
printf("\n最小公倍数%d",i);


}
