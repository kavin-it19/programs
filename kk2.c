#include<stdio.h>
void main()
{
int a,b,c;
printf("enter the three numbers");
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
if(a>b&&a<c)
{
printf("a is bigger");
}
else if(b>c)
{
printf("b is greater");
}
else
{
printf("c is greater");
}
}

