#include<stdio.h>
#include<conio.h>
void main()
{
int n,a,b,res;
clrscr();
printf("\n which operation do you want to do\n");
printf("\n enter 1 for addition\n");
printf("\n enter 2 for subtraction\n");
printf("\n enter 3 for division\n");
printf("\n enter 5 for multiplication\n");
scanf("\n %d",&n);
printf("\n enter the first no\n");
scanf("\n %d",&a);
printf("\n enter the second no\n");
scanf("\n %d",&b);
switch(n)
{
case 1: res=a+b;
	printf("\n the addition is%d ",res);
	break;

case 2:	res=a-b;
	printf("\n the subtraction is%d ",res);
	break;

case 3: res=a/b;
	printf("\n the division is%d ",res);
	break;

case 4: res=a*b;
	printf("\n the multiplication is%d ",res);
	break;

	default: printf("\n wrong\n");
	return 1;
 }
getch();
}