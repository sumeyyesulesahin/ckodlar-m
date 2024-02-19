#include <stdio.h>
#include <stdlib.h>

int main()
{
 int dizi[5];
 int i;
 for (i=0;i<5;i++){
    printf("&d,elamani girin:,,i+1");
    scanf("%d",&dizi[i]);

 }
 printf("\n\n");
 int toplam=0,enbuyuk=dizi[0];
 for (i=0;i<5;i++){
    printf("%d -",dizi[i]);
    toplam+=dizi[i];
    if(enbuyuk<dizi[i])
        enbuyuk=dizi[i];

 }
   printf("\ndizinin toplami=%d",toplam);
   printf("\ndizinin ortalamasi=%d",toplam/5);
   printf("\ndizinin en buyuk elamani=%d",enbuyuk);


    return 0;
}
