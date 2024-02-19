#include <stdio.h>
#include <stdlib.h>

int main()
{
int ilksayim;
float ikincisayim;
char basharf;
printf("lutfen ilk sayiyi giriniz\n");
scanf("%d",&ilksayim);

printf("lutfen ikinci sayiyi giriniz\n");
scanf("%f",&ikincisayim);

printf("lutfen isminizin bas harfini giriniz\n");
scanf(" %c",&basharf);
printf("ilk sayim:%d\nikinci sayim:%f\nisminizin bas harfi:%c",ilksayim,ikincisayim,basharf);

    return 0;
}
