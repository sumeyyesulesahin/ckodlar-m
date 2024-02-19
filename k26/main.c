#include <stdio.h>
#include <stdlib.h>

int main()
{
   int alinacaksayi1,alinacaksayi2,secim;
        printf("birinci sayiyi giriniz:");
        scanf("%d",&alinacaksayi1);
        printf("ikinci sayiyi giriniz:");
        scanf("%d",&alinacaksayi2);
        printf("asagidakilerden birini seciniz\n1)Toplama islemi\n2)Cikarma islemi\n3)Carpma islemi\n4)Bolme islemi\n");
        scanf("%d",&secim);
   if(secim==1)
{
    printf("sectiginiz sayilarin toplami sudur=%d",alinacaksayi1+alinacaksayi2);

}
    else if (secim==2)
    {
        printf("sectiginiz sayilarin farki=%d",alinacaksayi1-alinacaksayi2);

    }
    else if(secim==3)
    {
        printf("sectiginiz sayilarin carpimi=%d",alinacaksayi1*alinacaksayi2);

    }
    else if(secim==4)
    {
        printf("sectiginiz sayilarin bolumu=%d",alinacaksayi1/alinacaksayi2);
    }
    else
    {
        printf("gecersiz giris yaptiniz");
    }
}
