//prime no

#include<stdio.h>
void main()
{
int i,count=0,num;
printf("Enter the number:");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
	if(num%i==0)
	{ count++;
	}}
if(count==2)
{	printf("The number entered is a prime number\n");
}
else
{
	printf("The number entered is not a prime number\n");
}
}

