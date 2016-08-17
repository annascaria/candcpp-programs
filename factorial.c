//factorial of a number

#include<stdio.h>
void main()
{
int i=1,j=1,num;
printf("Enter the value\n");
scanf("%d",&num);
do
{
j=j*num;
num--;
}
while(i<=num);
printf("The factorial of%d is %d\n",num,j);
}
