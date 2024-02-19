#include <stdio.h>
#include <stdlib.h>

  int asalmi(int sayi){

     int i;

     for(i=2;i<sayi;i++)
     {
         if(sayi%i==0)
        {
            return 0;
         }
     }
     return 1;
  }



int main()
{
   int n;

    printf("bir sayi giriniz");

    scanf("%d",&n);


    if(asalmi(n)==0)
    {
        printf("bu sayi asal degildir");
    }
    else
    {
        printf("bu sayi asaldir");
    }


}

