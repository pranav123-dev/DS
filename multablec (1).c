#include <stdio.h>
void main()
{
int n,i,mul;
printf("Enter a number\n");
scanf("%d", &n);
for(i=1;i<=10;i++)
{
mul=n*i;
printf("%d*%d=%d\n",n,i,mul);
}
}
