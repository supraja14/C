#include<stdio.h>
#include<conio.h>
void main()
	{
	char t;
	int a[100],i,j,k,count=0,temp;
	clrscr();
	while(t!='\n')
		{
		scanf("%d%c",&a[i],&t);
		i++;
		count++;
		}
	for(i=0;i<count;i++)
		{
		for(j=i+1;j<count;j++)
			{
			if(a[i]<a[j])
				{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
			}
		}
	printf("%d",a[0]);
	getch();
	}