#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yaricap,secim,islem1,islem2;
    float pisayisi=3.14;
        printf("lutfen dairenin yaricapini giriniz:");
        scanf("%d",&yaricap);
        printf("lutfen asagidaki islemlerden birini seciniz:\n1)islem1\nislem2");
        scanf("%d",&secim);
        islem1=2*pisayisi*yaricap;
        islem2=pisayisi*yaricap*yaricap;

        switch(secim)
        {
            case 1:printf("birinci islemi sectiniz=%d",islem1);break;
            case 2:printf("ikinci islemi sectiniz=%d",islem2);break;
            default:printf("yanlis secim yaptiniz");
        }

}
