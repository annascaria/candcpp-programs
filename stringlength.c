//to find the string length

#include <stdio.h>
void main()
{
char a[15];
int i, count=0;
printf("Enter the string: ");
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
  { count=count+1;
  }

printf("the string length is %d\n",count);
}
