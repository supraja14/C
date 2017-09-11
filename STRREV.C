#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100];
int i,n;
clrscr();
scanf("%s",s);
n=strlen(s);
printf("%s",strrev(s));
getch();
}