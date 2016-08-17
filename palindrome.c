//palindrome no

#include<stdio.h>
void main()
{
int num=0,l=0,s=0,j=0,i=0;
printf("enter the number:");
scanf("%d",&num);
l=num;
while(num>0)
{
i=num%10;
s=(s*10)+i;
j=num/10;
num=j;
}

if(s==l)
printf("%d is a palindrome\n",l);
else
printf("%d is not palindrome\n",l);
}

