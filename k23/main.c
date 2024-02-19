#include <stdio.h>
#include <stdlib.h>

int main()
{
  int alinacaksayi1,alinacaksayi2,secim;
    printf("lutfen birinci sayiyi giriniz:");
    scanf("%d",&alinacaksayi1);
    printf("lutfen ikinci sayiyi giriniz:");
    scanf("%d",&alinacaksayi2);
    printf("lutfen bir islem seciniz\n1)Toplama islemi\n2)Cýkarma islemi\n3)Carpma islemi\n4)Bölme islemi");
    scanf("%d",&secim);
    switch(secim)
    {
        case 1:printf("birinci islemi sectiniz girdiginiz sayilarin toplami sudur=%d",alinacaksayi1+alinacaksayi2);break;
        case 2:printf("ikinci islemi sectiniz girdiginiz sayilarin farki sudur=%d",alinacaksayi1-alinacaksayi2);break;
        case 3:printf("ucuncu islemi sectiniz girdiginiz sayilarin carpimi sudur=%d",alinacaksayi1*alinacaksayi2);break;
        case 4:printf("dorduncu islemi sectiniz girdiginiz sayilarin bolumu sudur=%d",alinacaksayi1/alinacaksayi2);break;
        default:printf("yanlýs giris yaptiniz lutfen düzeltin");
    }
}
