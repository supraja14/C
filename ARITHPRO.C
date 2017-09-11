/*FIND THE Nth TERM OF AN ARITHMETIC PROGRESSION */

#include<stdio.h>
#include<conio.h>
void main()
	{
	int n=0,a1,a2,d=0,i;
	clrscr();
	scanf("%d",&a1);
	scanf("%d",&a2);
	scanf("%d",&n);
	d=a2-a1;
	n=a1+((n-1)*d);
	printf("%d",n);
	getch();
	}