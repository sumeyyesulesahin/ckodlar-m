#include <stdio.h>
#include <stdlib.h>
int faktor(int sayi)
{
    if(sayi==0)
    {
        return 1;
    }
    else
    {
        return sayi*faktor(sayi-1);
    }
}


int main()
{
   int n;
   printf("lutfen bir sayi giriniz:");
   scanf("%d",&n);
   printf("sayinin faktoriyeli sudur=%d",faktor(n));
}
