//armstrong number
#include<stdio.h>
void main()
{
int i,j=0,k=0,num;
printf("Enter the number:");
scanf("%d",&num);
while(i>10)
{
i=num%10;
j=num/10;
num=j;
k=k+(i*i*i);
}
printf("The armstrong value of the given number is %d",k);
}

