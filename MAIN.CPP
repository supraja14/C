#include <iostream.h>
#include <conio.h>

void numSys(int n){
   int number[100],i = 0;
//increment n by one
   n = n+1;
//Calculate binary of n i.e. n+1
   while(n != 1){
     if(n % 2 == 0)
      number[i++]=3;
     else
      number[i++]=4;
      n /= 2;
  }
//Print answer
// Note we are printing in reverse as
//Binary number is calculated in reverse
   while(i--)
     cout<<number[i];
     cout<<endl;
}
int main()
{
int n,a[200];
cin>>n;
    numSys(n);
return 0;
getch();
}