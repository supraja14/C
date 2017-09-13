#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100]={'P','R','O','G','R','A','M','M','E','R','\0'};
char b[100][100];
int i,j,n,k,l;
clrscr();
n = strlen(a);
cout<<n;
cout<<"\n";
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==j)
		{
		b[i][j]=a[i];
		}
		cout<<"\t"<<b[i][j];
	}

}
for(k=n;k>0;k--)
	{
	for(l=0;l<n;l++)
		{
		cout<<"\t"<<b[k][l];
		}

}

getch();
}