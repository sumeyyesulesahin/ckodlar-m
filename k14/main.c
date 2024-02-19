#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sayi1,sayi2,sayi3;
        printf("lutfen uc adet sayi giriniz");
        scanf("%d%d%d",&sayi1,&sayi2,&sayi3);


   if(sayi1>sayi2&&sayi1>sayi3)
   {
      printf("%d sayisi en buyuk sayidir",sayi1);

   }
   if(sayi2>sayi1&&sayi2>sayi3)
   {
       printf("%d sayisi en buyuk sayidir",sayi2);
   }

    if(sayi3>sayi1&&sayi3>sayi2)
    {
        printf("%d sayisi en buyuk sayidir",sayi3);

    }
     if (sayi1==sayi2&&sayi1==sayi3)
     {
         printf("uc sayi birbirine esittir");
     }
    return 0;
}
