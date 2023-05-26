#include <stdio.h>
#include <stdlib.h>
int listele(int sayi)
{
    if(sayi==0)
    {
        printf("%d",sayi);

    }
    else
    {
        printf("%d\n",sayi);
        listele(sayi-1);
    }
}

int main()
{
   int a;
   printf("lutfen bir sayi giriniz");
   scanf("%d",&a);
   listele(a);
}
