//if the entered character is small,then convert them into CAPITAL
#include<stdio.h>
void main()
{
char ch;
printf("Enter the alphabet\n");
scanf("%c",&ch);
if(ch>'Z')
{
ch=ch-32;
printf("%c\n",ch);
}
else
{
printf("%c\n",ch);
}
}
