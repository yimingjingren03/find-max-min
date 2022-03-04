#include <stdio.h>
void main()
{
int i,m,n,sum=1;
scanf("%d%d",&m,&n);
for(i=2;i<=m&&i<=n;i++)
{
	while(m%i==0&&n%i==0)
	{	
m/=i;
n/=i;
sum=sum*i;
}
}
printf("最大公约数%d，最小公倍数%d",sum,sum*m*n);

}
