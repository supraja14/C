/* Print the nth weight of numbers given 3 inputs:
	1.input t
	2.two values separated by space for a1 and ax
	3.the set of t values

INPUT:
 3
   1 9
	63
	108
	77

OUTPUT:
4
6
2
*/
#include<stdio.h>
#include<conio.h>

void main()

	{
	int count,t,a1,ax,a[100],i,j;
	clrscr();
	scanf("%d",&t);
	scanf("%d %d",&a1,&ax);
	for(i=0;i<t;i++)
		{
		scanf("%d",a[i]);
		}
	for(i=0;i<t;i++)
		{
		count=0;
		for(j=a1;j<=ax;j++)
			{
			if(a[i]%j==0)
				{
				count++;
				}
			}
		printf("%d ",count);
		}
	getch();
	}