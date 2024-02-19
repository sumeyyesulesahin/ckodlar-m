#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
   char isim[15],soyisim[10];
   int secim;
   int sayi;
        printf("sansli cekilis uygulamasina hosgeldiniz\nlutfen isminizi giriniz:");
        scanf("%s",&isim);
        printf("\nlutfen soyisminizi giriniz\n");
        scanf("%s",&soyisim);
        printf("asagidaki islemlerden biri icin secim yapiniz\n1)sansli cekilis dene\n2)kullanici bilgirenizi kontrol ediniz");
        printf("\nlutfen birini seciniz");
        scanf("%d",secim);


   if(secim==1)
   {
    printf("suan da sansli cekilis uygulamasindasiniz lutfen bir ile bes arasinda bir sayi giriniz");
    scanf("%d",sayi);
    int randomsayi=1+rand()%5;
    if(sayi==randomsayi)
    {
       printf("girdiginiz sayi:%d\ncekilisteki sayi:%d",sayi,randomsayi);
       printf("kazandiniz");

    }
    else{
        printf("maalesef kazanamadiniz");
    }



   }
   else if(secim==2)
   {
       printf("kullanýcý adiniz:%s\nkullanici soyadiniz",isim,soyisim);

   }


}
