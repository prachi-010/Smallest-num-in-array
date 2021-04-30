#include<stdio.h>
#include<conio.h>

void main()
{
int A[10];
int i,smallest;
clrscr();

for(i=0;i<=10;i++)
{
printf("Enter element A[%d] of array\n",i);
scanf("%d",&A[i]);
}

smallest=A[0];

for(i=1;i<=10;i++)
{
if(smallest>A[i])
{
smallest=A[i];
}
}
printf("\nThe smallest number of the array is\n%d",smallest);
getch();
}
