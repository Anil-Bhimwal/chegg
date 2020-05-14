#include<stdio.h>
#include<conio.h>
void main()
{
int s1,s2,s3,a,b,c;

printf("\n Enter three sides of a triangle:");
scanf("%d%d%d",&s1,&s2,&s3);
a=(s1*s1)==(s2*s2)+(s3*s3);
b=(s2*s2)==(s1*s1)+(s3*s3);
c=(s3*s3)==(s1*s1)+(s2* s2);
if(s1!=s2 && s2!=s3 && s3!= s1)
printf("\nThe given triangle is a scalene triangle");
if((s1==s2)&&(s2!= s3))
printf("\nThe given triangle is an isosceles triangle");
if((s2==s3)&&(s3!= s1))
printf("\nThe given triangle is an issoscles triangle");
if((s1==s3)&&(s3!=s2))
printf("\nThe given triangle is an isosceles triangle");
if((s1==s2)&&(s2==s3))
printf("\nThe given triangle is an equilateral triangle");
if(a||b||c)
printf("\nThe given triangle is a right-angled triangle");
printf("\nPress any key to exit.");
getch();
}
