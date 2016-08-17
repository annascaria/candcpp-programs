//sum of the digits of any numbers
#include<stdio.h>
void main()
{
int num,i=0,j=0,k=0;
printf("Enter the number:");
scanf("%d",&num);
while(num>10)
{
i=num%10;
j=num/10;
num=j;
k=k+i;
}
k=k+num;
printf("The sum of the digits of a number is%d\n",k);
}
