#include<stdio.h>
#include<dos.h>
#include<math.h>
main()
{
int i,x,n;
float sum,p;
printf("\n Enter the base value:");
scanf("%d",&x);
printf("\n Enter the power value:");
scanf("%d",&n);
i=1;
sum=1;
while(i<=n)
{
p=pow(x,i);
sum=sum+(1/p);
i=i++;
}
printf("\n Sum is=%f",sum);
getch();
}
