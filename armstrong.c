#include<stdio.h>
void main()
{
int n=163;
int temp=n;
int r,sum=0;
while (n > 0)
{
r=n%10;
n=n/10;
sum=sum+r*r*r;
}
if (temp==sum)
{
printf("is an armstrong number");
}
else
{
printf("is not an armstrong number");
}
}

