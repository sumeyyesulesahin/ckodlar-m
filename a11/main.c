#include <stdio.h>
#include <stdlib.h>

 int  toplam(int sayi)
  {
     if(sayi==1)
     {
         return 1;
     }
     else
     {
         return sayi+toplam(sayi-1);
     }
  }



int main()
{
    int n;
    printf("lutfen bir sayi giriniz");
    scanf("%d",&n);
    printf("toplam sonuc=%d",toplam(n));
}
