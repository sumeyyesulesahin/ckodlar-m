#include <stdio.h>
#include <stdlib.h>

int main()
{
  int sayi1,sayi2;
      printf("iki adet sayi giriniz:");
      scanf("%d%d",&sayi1,&sayi2);
  if(sayi1>sayi2)
  {
      printf("sayi1 sayi2 den buyuktur");

  }
  else if(sayi2>sayi1)
  {
      printf("sayi2 sayi1 den buyuktur");
  }
   else
   {
       printf("%d=%d iki sayi birbirine esittir",sayi1,sayi2);
   }
}
