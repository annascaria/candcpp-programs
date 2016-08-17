//fibanocci series


#include<stdio.h>
void main()
{
int i=0,num=0,k=0,j=0;
printf("Enter the limit\n");
scanf("%d",&num);
printf("\n%d",i);
for(j=1;num>0;num--)
{
printf("%d",j);
k=i+j;
i=j;
j=k;
}
printf("\n");
}
