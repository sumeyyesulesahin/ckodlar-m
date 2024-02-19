#include <stdio.h>
#include <stdlib.h>
void mesajyaz(int *x)
{
    int i;
    for(i==1;i<*x;i++)
    {
        printf("%d merhaba dunya\n",i);
    }
}

int main()
{
   /*int dizi[]={5,4,8,9,11};
   int*ptr;
   ptr=dizi;
   int i;

   for(i=0;i<5;i++)
   {
       printf("dizi [%d] %d adresi:%p\n",i,(*ptr+i),(ptr+i));
   }
    int dizi[]={5,4,8,9,11};
    int *ptr;
    ptr=dizi;

      int i;

      for(i=0;i<5;i++)
      {
          printf("[%d]:%d nin adresi%p\n",i,*(ptr+i),(ptr+i));
      }*/
     int deger;
     printf("deger girin:");
     scanf("%d",&deger);
     mesajyaz(&deger);




}
